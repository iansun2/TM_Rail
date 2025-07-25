// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tm_rail_interface:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef TM_RAIL_INTERFACE__MSG__DETAIL__STATUS__BUILDER_HPP_
#define TM_RAIL_INTERFACE__MSG__DETAIL__STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tm_rail_interface/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tm_rail_interface
{

namespace msg
{

namespace builder
{

class Init_Status_bag_detected
{
public:
  explicit Init_Status_bag_detected(::tm_rail_interface::msg::Status & msg)
  : msg_(msg)
  {}
  ::tm_rail_interface::msg::Status bag_detected(::tm_rail_interface::msg::Status::_bag_detected_type arg)
  {
    msg_.bag_detected = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tm_rail_interface::msg::Status msg_;
};

class Init_Status_busy
{
public:
  explicit Init_Status_busy(::tm_rail_interface::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_bag_detected busy(::tm_rail_interface::msg::Status::_busy_type arg)
  {
    msg_.busy = std::move(arg);
    return Init_Status_bag_detected(msg_);
  }

private:
  ::tm_rail_interface::msg::Status msg_;
};

class Init_Status_homed
{
public:
  explicit Init_Status_homed(::tm_rail_interface::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_busy homed(::tm_rail_interface::msg::Status::_homed_type arg)
  {
    msg_.homed = std::move(arg);
    return Init_Status_busy(msg_);
  }

private:
  ::tm_rail_interface::msg::Status msg_;
};

class Init_Status_velocity
{
public:
  explicit Init_Status_velocity(::tm_rail_interface::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_homed velocity(::tm_rail_interface::msg::Status::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_Status_homed(msg_);
  }

private:
  ::tm_rail_interface::msg::Status msg_;
};

class Init_Status_position
{
public:
  Init_Status_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Status_velocity position(::tm_rail_interface::msg::Status::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Status_velocity(msg_);
  }

private:
  ::tm_rail_interface::msg::Status msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tm_rail_interface::msg::Status>()
{
  return tm_rail_interface::msg::builder::Init_Status_position();
}

}  // namespace tm_rail_interface

#endif  // TM_RAIL_INTERFACE__MSG__DETAIL__STATUS__BUILDER_HPP_
