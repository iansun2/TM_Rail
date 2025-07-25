import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from tm_rail_interface.srv import RailControl
from tm_rail_interface.msg import Status
from .tm_rail_communication import SerialPacketController
import yaml
import traceback
import time

class TMRailNode(Node):
    def __init__(self, rail_name: str, baud_rate: int, config: dict, main_rail: bool = False):
        super().__init__(rail_name)
        self.get_logger().info(f"{rail_name} init")
        ## init communication
        self.get_logger().info(f"{rail_name} baud rate: {baud_rate}")
        try:
            self.controller = SerialPacketController(rail_name, baud_rate)
            self.controller.start_receiving()
            self.get_logger().info(f"Successfully connected")
        except Exception as e:
            self.get_logger().error(f"Failed to connect: {e}")
            rclpy.shutdown()
            return
        self.controller.set_status_callback(self.status_callback)
        # config
        self.config = config
        ## create service when main_rail
        if main_rail:
            self.get_logger().info(f"Create service")
            self.server = self.create_service(RailControl, 'rail_control', self.rail_control_callback)
        ## Publishers
        self.status_pub = self.create_publisher(Status, '/' + rail_name + '/status', 2)
        self.rail_nodes:  dict[str, TMRailNode] = {}

    def transfer_to_main_rail(self, arm_rail_node: 'TMRailNode'):
        '''
        `Require initial state` main and arm not at docking position\n
        `Exit state` main -> home, arm -> docking position + dock move
        '''
        arm_rail_cfg = arm_rail_node.config
        main_rail_moving_vel = self.config["moving_vel"]
        arm_rail_moving_vel = arm_rail_cfg["moving_vel"]
        arm_rail_dock_cfg = arm_rail_cfg["dock"]
        ## docking pos
        self.controller.goto(arm_rail_cfg["m_docking_pos"], main_rail_moving_vel)
        arm_rail_node.controller.goto(arm_rail_cfg["a_docking_pos"], arm_rail_moving_vel)
        ## transfer bag carrier to main rail (dock)
        self.controller.move(arm_rail_dock_cfg["m_move"], 10)
        arm_rail_node.controller.move(arm_rail_dock_cfg["a_move"], 10)
        ## zero main rail
        self.controller.goto(10, main_rail_moving_vel)
        self.controller.home()

    def transfer_to_arm_rail(self, arm_rail_node: 'TMRailNode'):
        '''
        `Require initial state` main and arm not at docking position\n
        `Exit state` main -> docking position + dock move, arm -> home
        '''
        arm_rail_cfg = arm_rail_node.config
        main_rail_moving_vel = self.config["moving_vel"]
        arm_rail_moving_vel = arm_rail_cfg["moving_vel"]
        arm_rail_undock_cfg = arm_rail_cfg["undock"]
        ## docking pos
        self.controller.goto(arm_rail_cfg["m_docking_pos"], main_rail_moving_vel)
        arm_rail_node.controller.goto(arm_rail_cfg["a_docking_pos"], arm_rail_moving_vel)
        ## transfer bag carrier to arm rail (undock)
        arm_rail_node.controller.move(arm_rail_undock_cfg["a_move"], 10)
        self.controller.move(arm_rail_undock_cfg["m_move"], 10)
        ## zero arm rail
        arm_rail_node.controller.goto(10, arm_rail_moving_vel)
        arm_rail_node.controller.home()

    def rail_control_callback(self, request: RailControl.Request, response: RailControl.Response):
        ## read arm rail config
        rail_name = request.rail_name
        if rail_name in self.rail_nodes:
            arm_rail_node = self.rail_nodes[rail_name]
            arm_rail_config = arm_rail_node.config
            arm_rail_moving_vel = arm_rail_config["moving_vel"]
            arm_rail_standby_pos = arm_rail_config["standby_pos"]
        ## rail_name not found
        else:
            self.get_logger().error(f"name: {rail_name} not found")
            return -1
        ## read main rail config
        main_rail_bag_cfg = self.config["bag"]
        main_rail_bag_pos = main_rail_bag_cfg["pos"]
        main_rail_bag_release_deg = main_rail_bag_cfg["release_deg"]
        main_rail_bag_lock_deg = main_rail_bag_cfg["lock_deg"]
        main_rail_standby_pos = self.config["standby_pos"]
        main_rail_moving_vel = self.config["moving_vel"]
        ## OPT
        OPT_INIT = 0
        OPT_CALL_RAIL = 1
        OPT_RETURN_BAG = 2
        opt = request.opt_code
        try:
            if opt == OPT_INIT:
                self.get_logger().info(f"init rail: {rail_name}")
                self.controller.home()
                arm_rail_node.controller.home()
                response.result = 0
            elif opt == OPT_CALL_RAIL:
                self.get_logger().info(f"call rail: {rail_name}")
                self.transfer_to_main_rail(arm_rail_node)
                # arm_rail_node.controller.goto(arm_rail_standby_pos, arm_rail_moving_vel)
                self.controller.move(main_rail_bag_pos, main_rail_moving_vel)
                ## wait user put bag
                # self.controller.auto_bag(main_rail_bag_release_deg, main_rail_bag_lock_deg)
                ## go to funnel
                self.transfer_to_arm_rail(arm_rail_node)
                arm_rail_node.controller.goto(arm_rail_config["funnel_pos"], arm_rail_moving_vel)
                self.controller.goto(main_rail_standby_pos, main_rail_moving_vel)
                response.result = 0
            elif opt == OPT_RETURN_BAG:
                self.get_logger().info(f"return bag: {rail_name}")
                self.transfer_to_main_rail(arm_rail_node)
                arm_rail_node.controller.goto(arm_rail_standby_pos, arm_rail_moving_vel)
                self.controller.move(main_rail_bag_pos, main_rail_moving_vel)
                ## drap the bag
                self.controller.bag(main_rail_bag_release_deg)
                time.sleep(1)
                self.controller.bag(main_rail_bag_lock_deg)
                ## carrier back to arm rail
                self.transfer_to_arm_rail(arm_rail_node)
                arm_rail_node.controller.goto(arm_rail_standby_pos, arm_rail_moving_vel)
                self.controller.goto(main_rail_standby_pos, main_rail_moving_vel)
                response.result = 0
            else:
                self.get_logger().error("unknown opt")
                response.result = -1
        except Exception:
            print(traceback.format_exc())
            response.result = -2
        return response

    def status_callback(self):
        status = self.controller.status()
        if status is not None:
            position, velocity, homed, busy, bag_detected = status
            status_msg = Status()
            status_msg.position = float(position)
            status_msg.velocity = float(velocity)
            status_msg.homed = bool(homed)
            status_msg.busy = bool(busy)
            status_msg.bag_detected = bool(bag_detected)
            self.status_pub.publish(status_msg)


class Entry(Node):
    def __init__(self):
        super().__init__('tm_rail_entry')
        ## param
        self.declare_parameter('config', './tm_rail_config.yaml')
        config_file = self.get_parameter('config').get_parameter_value().string_value
        ## config
        with open(config_file, 'r') as f:
            self.config: dict = yaml.safe_load(f)

    def prepare_node(self) -> dict[str, TMRailNode]:
        rail_nodes: dict[str, TMRailNode] = {}
        ## get config
        main_rail_name = self.config["main_rail"]
        baud_rate = self.config["baud_rate"]
        rails = self.config["rails"]
        # print(rails)
        ## create rail nodes
        for rail_name, rail_config in rails.items():
            self.get_logger().info(f"start {rail_name}")
            node = TMRailNode(rail_name, baud_rate, rail_config, rail_name == main_rail_name)
            rail_nodes[rail_name] = node
            if not rclpy.ok():
                raise Exception("rclpy not ok")
        ## set rail_node in main rail
        rail_nodes[main_rail_name].rail_nodes = rail_nodes
        return rail_nodes


def main(args=None):
    rclpy.init(args=args)
    executor = MultiThreadedExecutor()
    entry_node = Entry()
    rail_nodes = entry_node.prepare_node()
    for target, node in rail_nodes.items():
        executor.add_node(node)
    # executor.spin()
    try:
        ## spin nodes
        executor.spin()
    except (KeyboardInterrupt, Exception) as e:
        if isinstance(e, KeyboardInterrupt):
            print("\nKeyboardInterrupt received, shutting down.")
        else:
            print(f"An exception occurred: {e}. Shutting down.")
    finally:
        print("Cleaning up nodes...")
        if executor:
            executor.shutdown()
        for target, node in rail_nodes.items():
            # node.controller.close()
            node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()

if __name__ == '__main__':
    main()