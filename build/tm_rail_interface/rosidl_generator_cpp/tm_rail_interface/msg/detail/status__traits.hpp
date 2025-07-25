// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tm_rail_interface:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef TM_RAIL_INTERFACE__MSG__DETAIL__STATUS__TRAITS_HPP_
#define TM_RAIL_INTERFACE__MSG__DETAIL__STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tm_rail_interface/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tm_rail_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Status & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: homed
  {
    out << "homed: ";
    rosidl_generator_traits::value_to_yaml(msg.homed, out);
    out << ", ";
  }

  // member: busy
  {
    out << "busy: ";
    rosidl_generator_traits::value_to_yaml(msg.busy, out);
    out << ", ";
  }

  // member: bag_detected
  {
    out << "bag_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.bag_detected, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: homed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "homed: ";
    rosidl_generator_traits::value_to_yaml(msg.homed, out);
    out << "\n";
  }

  // member: busy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "busy: ";
    rosidl_generator_traits::value_to_yaml(msg.busy, out);
    out << "\n";
  }

  // member: bag_detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bag_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.bag_detected, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Status & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace tm_rail_interface

namespace rosidl_generator_traits
{

[[deprecated("use tm_rail_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tm_rail_interface::msg::Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  tm_rail_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tm_rail_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const tm_rail_interface::msg::Status & msg)
{
  return tm_rail_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tm_rail_interface::msg::Status>()
{
  return "tm_rail_interface::msg::Status";
}

template<>
inline const char * name<tm_rail_interface::msg::Status>()
{
  return "tm_rail_interface/msg/Status";
}

template<>
struct has_fixed_size<tm_rail_interface::msg::Status>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tm_rail_interface::msg::Status>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tm_rail_interface::msg::Status>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TM_RAIL_INTERFACE__MSG__DETAIL__STATUS__TRAITS_HPP_
