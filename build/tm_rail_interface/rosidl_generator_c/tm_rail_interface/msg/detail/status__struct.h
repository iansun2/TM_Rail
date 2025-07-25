// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tm_rail_interface:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef TM_RAIL_INTERFACE__MSG__DETAIL__STATUS__STRUCT_H_
#define TM_RAIL_INTERFACE__MSG__DETAIL__STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Status in the package tm_rail_interface.
typedef struct tm_rail_interface__msg__Status
{
  float position;
  float velocity;
  bool homed;
  bool busy;
  bool bag_detected;
} tm_rail_interface__msg__Status;

// Struct for a sequence of tm_rail_interface__msg__Status.
typedef struct tm_rail_interface__msg__Status__Sequence
{
  tm_rail_interface__msg__Status * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tm_rail_interface__msg__Status__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TM_RAIL_INTERFACE__MSG__DETAIL__STATUS__STRUCT_H_
