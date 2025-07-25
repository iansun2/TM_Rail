// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tm_rail_interface:srv/RailControl.idl
// generated code does not contain a copyright notice
#include "tm_rail_interface/srv/detail/rail_control__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tm_rail_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tm_rail_interface/srv/detail/rail_control__struct.h"
#include "tm_rail_interface/srv/detail/rail_control__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // rail_name
#include "rosidl_runtime_c/string_functions.h"  // rail_name

// forward declare type support functions


using _RailControl_Request__ros_msg_type = tm_rail_interface__srv__RailControl_Request;

static bool _RailControl_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RailControl_Request__ros_msg_type * ros_message = static_cast<const _RailControl_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: opt_code
  {
    cdr << ros_message->opt_code;
  }

  // Field name: rail_name
  {
    const rosidl_runtime_c__String * str = &ros_message->rail_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _RailControl_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RailControl_Request__ros_msg_type * ros_message = static_cast<_RailControl_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: opt_code
  {
    cdr >> ros_message->opt_code;
  }

  // Field name: rail_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->rail_name.data) {
      rosidl_runtime_c__String__init(&ros_message->rail_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->rail_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'rail_name'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tm_rail_interface
size_t get_serialized_size_tm_rail_interface__srv__RailControl_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RailControl_Request__ros_msg_type * ros_message = static_cast<const _RailControl_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name opt_code
  {
    size_t item_size = sizeof(ros_message->opt_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rail_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->rail_name.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _RailControl_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tm_rail_interface__srv__RailControl_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tm_rail_interface
size_t max_serialized_size_tm_rail_interface__srv__RailControl_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: opt_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rail_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tm_rail_interface__srv__RailControl_Request;
    is_plain =
      (
      offsetof(DataType, rail_name) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RailControl_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tm_rail_interface__srv__RailControl_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RailControl_Request = {
  "tm_rail_interface::srv",
  "RailControl_Request",
  _RailControl_Request__cdr_serialize,
  _RailControl_Request__cdr_deserialize,
  _RailControl_Request__get_serialized_size,
  _RailControl_Request__max_serialized_size
};

static rosidl_message_type_support_t _RailControl_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RailControl_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tm_rail_interface, srv, RailControl_Request)() {
  return &_RailControl_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "tm_rail_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "tm_rail_interface/srv/detail/rail_control__struct.h"
// already included above
// #include "tm_rail_interface/srv/detail/rail_control__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RailControl_Response__ros_msg_type = tm_rail_interface__srv__RailControl_Response;

static bool _RailControl_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RailControl_Response__ros_msg_type * ros_message = static_cast<const _RailControl_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr << ros_message->result;
  }

  return true;
}

static bool _RailControl_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RailControl_Response__ros_msg_type * ros_message = static_cast<_RailControl_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr >> ros_message->result;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tm_rail_interface
size_t get_serialized_size_tm_rail_interface__srv__RailControl_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RailControl_Response__ros_msg_type * ros_message = static_cast<const _RailControl_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result
  {
    size_t item_size = sizeof(ros_message->result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RailControl_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tm_rail_interface__srv__RailControl_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tm_rail_interface
size_t max_serialized_size_tm_rail_interface__srv__RailControl_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: result
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tm_rail_interface__srv__RailControl_Response;
    is_plain =
      (
      offsetof(DataType, result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RailControl_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tm_rail_interface__srv__RailControl_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RailControl_Response = {
  "tm_rail_interface::srv",
  "RailControl_Response",
  _RailControl_Response__cdr_serialize,
  _RailControl_Response__cdr_deserialize,
  _RailControl_Response__get_serialized_size,
  _RailControl_Response__max_serialized_size
};

static rosidl_message_type_support_t _RailControl_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RailControl_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tm_rail_interface, srv, RailControl_Response)() {
  return &_RailControl_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "tm_rail_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tm_rail_interface/srv/rail_control.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t RailControl__callbacks = {
  "tm_rail_interface::srv",
  "RailControl",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tm_rail_interface, srv, RailControl_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tm_rail_interface, srv, RailControl_Response)(),
};

static rosidl_service_type_support_t RailControl__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &RailControl__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tm_rail_interface, srv, RailControl)() {
  return &RailControl__handle;
}

#if defined(__cplusplus)
}
#endif
