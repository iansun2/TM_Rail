// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tm_rail_interface:srv/RailControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tm_rail_interface/srv/detail/rail_control__rosidl_typesupport_introspection_c.h"
#include "tm_rail_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tm_rail_interface/srv/detail/rail_control__functions.h"
#include "tm_rail_interface/srv/detail/rail_control__struct.h"


// Include directives for member types
// Member `rail_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tm_rail_interface__srv__RailControl_Request__rosidl_typesupport_introspection_c__RailControl_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tm_rail_interface__srv__RailControl_Request__init(message_memory);
}

void tm_rail_interface__srv__RailControl_Request__rosidl_typesupport_introspection_c__RailControl_Request_fini_function(void * message_memory)
{
  tm_rail_interface__srv__RailControl_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tm_rail_interface__srv__RailControl_Request__rosidl_typesupport_introspection_c__RailControl_Request_message_member_array[2] = {
  {
    "opt_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_rail_interface__srv__RailControl_Request, opt_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rail_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_rail_interface__srv__RailControl_Request, rail_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tm_rail_interface__srv__RailControl_Request__rosidl_typesupport_introspection_c__RailControl_Request_message_members = {
  "tm_rail_interface__srv",  // message namespace
  "RailControl_Request",  // message name
  2,  // number of fields
  sizeof(tm_rail_interface__srv__RailControl_Request),
  tm_rail_interface__srv__RailControl_Request__rosidl_typesupport_introspection_c__RailControl_Request_message_member_array,  // message members
  tm_rail_interface__srv__RailControl_Request__rosidl_typesupport_introspection_c__RailControl_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  tm_rail_interface__srv__RailControl_Request__rosidl_typesupport_introspection_c__RailControl_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tm_rail_interface__srv__RailControl_Request__rosidl_typesupport_introspection_c__RailControl_Request_message_type_support_handle = {
  0,
  &tm_rail_interface__srv__RailControl_Request__rosidl_typesupport_introspection_c__RailControl_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tm_rail_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_rail_interface, srv, RailControl_Request)() {
  if (!tm_rail_interface__srv__RailControl_Request__rosidl_typesupport_introspection_c__RailControl_Request_message_type_support_handle.typesupport_identifier) {
    tm_rail_interface__srv__RailControl_Request__rosidl_typesupport_introspection_c__RailControl_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tm_rail_interface__srv__RailControl_Request__rosidl_typesupport_introspection_c__RailControl_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tm_rail_interface/srv/detail/rail_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tm_rail_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tm_rail_interface/srv/detail/rail_control__functions.h"
// already included above
// #include "tm_rail_interface/srv/detail/rail_control__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void tm_rail_interface__srv__RailControl_Response__rosidl_typesupport_introspection_c__RailControl_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tm_rail_interface__srv__RailControl_Response__init(message_memory);
}

void tm_rail_interface__srv__RailControl_Response__rosidl_typesupport_introspection_c__RailControl_Response_fini_function(void * message_memory)
{
  tm_rail_interface__srv__RailControl_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tm_rail_interface__srv__RailControl_Response__rosidl_typesupport_introspection_c__RailControl_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_rail_interface__srv__RailControl_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tm_rail_interface__srv__RailControl_Response__rosidl_typesupport_introspection_c__RailControl_Response_message_members = {
  "tm_rail_interface__srv",  // message namespace
  "RailControl_Response",  // message name
  1,  // number of fields
  sizeof(tm_rail_interface__srv__RailControl_Response),
  tm_rail_interface__srv__RailControl_Response__rosidl_typesupport_introspection_c__RailControl_Response_message_member_array,  // message members
  tm_rail_interface__srv__RailControl_Response__rosidl_typesupport_introspection_c__RailControl_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  tm_rail_interface__srv__RailControl_Response__rosidl_typesupport_introspection_c__RailControl_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tm_rail_interface__srv__RailControl_Response__rosidl_typesupport_introspection_c__RailControl_Response_message_type_support_handle = {
  0,
  &tm_rail_interface__srv__RailControl_Response__rosidl_typesupport_introspection_c__RailControl_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tm_rail_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_rail_interface, srv, RailControl_Response)() {
  if (!tm_rail_interface__srv__RailControl_Response__rosidl_typesupport_introspection_c__RailControl_Response_message_type_support_handle.typesupport_identifier) {
    tm_rail_interface__srv__RailControl_Response__rosidl_typesupport_introspection_c__RailControl_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tm_rail_interface__srv__RailControl_Response__rosidl_typesupport_introspection_c__RailControl_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tm_rail_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tm_rail_interface/srv/detail/rail_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tm_rail_interface__srv__detail__rail_control__rosidl_typesupport_introspection_c__RailControl_service_members = {
  "tm_rail_interface__srv",  // service namespace
  "RailControl",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tm_rail_interface__srv__detail__rail_control__rosidl_typesupport_introspection_c__RailControl_Request_message_type_support_handle,
  NULL  // response message
  // tm_rail_interface__srv__detail__rail_control__rosidl_typesupport_introspection_c__RailControl_Response_message_type_support_handle
};

static rosidl_service_type_support_t tm_rail_interface__srv__detail__rail_control__rosidl_typesupport_introspection_c__RailControl_service_type_support_handle = {
  0,
  &tm_rail_interface__srv__detail__rail_control__rosidl_typesupport_introspection_c__RailControl_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_rail_interface, srv, RailControl_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_rail_interface, srv, RailControl_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tm_rail_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_rail_interface, srv, RailControl)() {
  if (!tm_rail_interface__srv__detail__rail_control__rosidl_typesupport_introspection_c__RailControl_service_type_support_handle.typesupport_identifier) {
    tm_rail_interface__srv__detail__rail_control__rosidl_typesupport_introspection_c__RailControl_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tm_rail_interface__srv__detail__rail_control__rosidl_typesupport_introspection_c__RailControl_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_rail_interface, srv, RailControl_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_rail_interface, srv, RailControl_Response)()->data;
  }

  return &tm_rail_interface__srv__detail__rail_control__rosidl_typesupport_introspection_c__RailControl_service_type_support_handle;
}
