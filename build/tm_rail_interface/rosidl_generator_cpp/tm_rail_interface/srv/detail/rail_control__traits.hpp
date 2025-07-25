// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tm_rail_interface:srv/RailControl.idl
// generated code does not contain a copyright notice

#ifndef TM_RAIL_INTERFACE__SRV__DETAIL__RAIL_CONTROL__TRAITS_HPP_
#define TM_RAIL_INTERFACE__SRV__DETAIL__RAIL_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tm_rail_interface/srv/detail/rail_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tm_rail_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const RailControl_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: opt_code
  {
    out << "opt_code: ";
    rosidl_generator_traits::value_to_yaml(msg.opt_code, out);
    out << ", ";
  }

  // member: rail_name
  {
    out << "rail_name: ";
    rosidl_generator_traits::value_to_yaml(msg.rail_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RailControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: opt_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "opt_code: ";
    rosidl_generator_traits::value_to_yaml(msg.opt_code, out);
    out << "\n";
  }

  // member: rail_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rail_name: ";
    rosidl_generator_traits::value_to_yaml(msg.rail_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RailControl_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tm_rail_interface

namespace rosidl_generator_traits
{

[[deprecated("use tm_rail_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tm_rail_interface::srv::RailControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tm_rail_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tm_rail_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const tm_rail_interface::srv::RailControl_Request & msg)
{
  return tm_rail_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tm_rail_interface::srv::RailControl_Request>()
{
  return "tm_rail_interface::srv::RailControl_Request";
}

template<>
inline const char * name<tm_rail_interface::srv::RailControl_Request>()
{
  return "tm_rail_interface/srv/RailControl_Request";
}

template<>
struct has_fixed_size<tm_rail_interface::srv::RailControl_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tm_rail_interface::srv::RailControl_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tm_rail_interface::srv::RailControl_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tm_rail_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const RailControl_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RailControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RailControl_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tm_rail_interface

namespace rosidl_generator_traits
{

[[deprecated("use tm_rail_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tm_rail_interface::srv::RailControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tm_rail_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tm_rail_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const tm_rail_interface::srv::RailControl_Response & msg)
{
  return tm_rail_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tm_rail_interface::srv::RailControl_Response>()
{
  return "tm_rail_interface::srv::RailControl_Response";
}

template<>
inline const char * name<tm_rail_interface::srv::RailControl_Response>()
{
  return "tm_rail_interface/srv/RailControl_Response";
}

template<>
struct has_fixed_size<tm_rail_interface::srv::RailControl_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tm_rail_interface::srv::RailControl_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tm_rail_interface::srv::RailControl_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tm_rail_interface::srv::RailControl>()
{
  return "tm_rail_interface::srv::RailControl";
}

template<>
inline const char * name<tm_rail_interface::srv::RailControl>()
{
  return "tm_rail_interface/srv/RailControl";
}

template<>
struct has_fixed_size<tm_rail_interface::srv::RailControl>
  : std::integral_constant<
    bool,
    has_fixed_size<tm_rail_interface::srv::RailControl_Request>::value &&
    has_fixed_size<tm_rail_interface::srv::RailControl_Response>::value
  >
{
};

template<>
struct has_bounded_size<tm_rail_interface::srv::RailControl>
  : std::integral_constant<
    bool,
    has_bounded_size<tm_rail_interface::srv::RailControl_Request>::value &&
    has_bounded_size<tm_rail_interface::srv::RailControl_Response>::value
  >
{
};

template<>
struct is_service<tm_rail_interface::srv::RailControl>
  : std::true_type
{
};

template<>
struct is_service_request<tm_rail_interface::srv::RailControl_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tm_rail_interface::srv::RailControl_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TM_RAIL_INTERFACE__SRV__DETAIL__RAIL_CONTROL__TRAITS_HPP_
