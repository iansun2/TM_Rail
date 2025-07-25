// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tm_rail_interface:srv/RailControl.idl
// generated code does not contain a copyright notice

#ifndef TM_RAIL_INTERFACE__SRV__DETAIL__RAIL_CONTROL__BUILDER_HPP_
#define TM_RAIL_INTERFACE__SRV__DETAIL__RAIL_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tm_rail_interface/srv/detail/rail_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tm_rail_interface
{

namespace srv
{

namespace builder
{

class Init_RailControl_Request_rail_name
{
public:
  explicit Init_RailControl_Request_rail_name(::tm_rail_interface::srv::RailControl_Request & msg)
  : msg_(msg)
  {}
  ::tm_rail_interface::srv::RailControl_Request rail_name(::tm_rail_interface::srv::RailControl_Request::_rail_name_type arg)
  {
    msg_.rail_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tm_rail_interface::srv::RailControl_Request msg_;
};

class Init_RailControl_Request_opt_code
{
public:
  Init_RailControl_Request_opt_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RailControl_Request_rail_name opt_code(::tm_rail_interface::srv::RailControl_Request::_opt_code_type arg)
  {
    msg_.opt_code = std::move(arg);
    return Init_RailControl_Request_rail_name(msg_);
  }

private:
  ::tm_rail_interface::srv::RailControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tm_rail_interface::srv::RailControl_Request>()
{
  return tm_rail_interface::srv::builder::Init_RailControl_Request_opt_code();
}

}  // namespace tm_rail_interface


namespace tm_rail_interface
{

namespace srv
{

namespace builder
{

class Init_RailControl_Response_result
{
public:
  Init_RailControl_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tm_rail_interface::srv::RailControl_Response result(::tm_rail_interface::srv::RailControl_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tm_rail_interface::srv::RailControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tm_rail_interface::srv::RailControl_Response>()
{
  return tm_rail_interface::srv::builder::Init_RailControl_Response_result();
}

}  // namespace tm_rail_interface

#endif  // TM_RAIL_INTERFACE__SRV__DETAIL__RAIL_CONTROL__BUILDER_HPP_
