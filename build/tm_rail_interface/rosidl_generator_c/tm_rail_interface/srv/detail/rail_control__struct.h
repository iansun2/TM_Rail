// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tm_rail_interface:srv/RailControl.idl
// generated code does not contain a copyright notice

#ifndef TM_RAIL_INTERFACE__SRV__DETAIL__RAIL_CONTROL__STRUCT_H_
#define TM_RAIL_INTERFACE__SRV__DETAIL__RAIL_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'rail_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RailControl in the package tm_rail_interface.
typedef struct tm_rail_interface__srv__RailControl_Request
{
  int8_t opt_code;
  rosidl_runtime_c__String rail_name;
} tm_rail_interface__srv__RailControl_Request;

// Struct for a sequence of tm_rail_interface__srv__RailControl_Request.
typedef struct tm_rail_interface__srv__RailControl_Request__Sequence
{
  tm_rail_interface__srv__RailControl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tm_rail_interface__srv__RailControl_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RailControl in the package tm_rail_interface.
typedef struct tm_rail_interface__srv__RailControl_Response
{
  /// success = 0
  /// failed = 1
  int32_t result;
} tm_rail_interface__srv__RailControl_Response;

// Struct for a sequence of tm_rail_interface__srv__RailControl_Response.
typedef struct tm_rail_interface__srv__RailControl_Response__Sequence
{
  tm_rail_interface__srv__RailControl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tm_rail_interface__srv__RailControl_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TM_RAIL_INTERFACE__SRV__DETAIL__RAIL_CONTROL__STRUCT_H_
