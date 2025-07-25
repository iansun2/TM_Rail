// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tm_rail_interface:srv/RailControl.idl
// generated code does not contain a copyright notice

#ifndef TM_RAIL_INTERFACE__SRV__DETAIL__RAIL_CONTROL__STRUCT_HPP_
#define TM_RAIL_INTERFACE__SRV__DETAIL__RAIL_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tm_rail_interface__srv__RailControl_Request __attribute__((deprecated))
#else
# define DEPRECATED__tm_rail_interface__srv__RailControl_Request __declspec(deprecated)
#endif

namespace tm_rail_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RailControl_Request_
{
  using Type = RailControl_Request_<ContainerAllocator>;

  explicit RailControl_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->opt_code = 0;
      this->rail_name = "";
    }
  }

  explicit RailControl_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rail_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->opt_code = 0;
      this->rail_name = "";
    }
  }

  // field types and members
  using _opt_code_type =
    int8_t;
  _opt_code_type opt_code;
  using _rail_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _rail_name_type rail_name;

  // setters for named parameter idiom
  Type & set__opt_code(
    const int8_t & _arg)
  {
    this->opt_code = _arg;
    return *this;
  }
  Type & set__rail_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->rail_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tm_rail_interface::srv::RailControl_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tm_rail_interface::srv::RailControl_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tm_rail_interface::srv::RailControl_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tm_rail_interface::srv::RailControl_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tm_rail_interface::srv::RailControl_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tm_rail_interface::srv::RailControl_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tm_rail_interface::srv::RailControl_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tm_rail_interface::srv::RailControl_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tm_rail_interface::srv::RailControl_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tm_rail_interface::srv::RailControl_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tm_rail_interface__srv__RailControl_Request
    std::shared_ptr<tm_rail_interface::srv::RailControl_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tm_rail_interface__srv__RailControl_Request
    std::shared_ptr<tm_rail_interface::srv::RailControl_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RailControl_Request_ & other) const
  {
    if (this->opt_code != other.opt_code) {
      return false;
    }
    if (this->rail_name != other.rail_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const RailControl_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RailControl_Request_

// alias to use template instance with default allocator
using RailControl_Request =
  tm_rail_interface::srv::RailControl_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tm_rail_interface


#ifndef _WIN32
# define DEPRECATED__tm_rail_interface__srv__RailControl_Response __attribute__((deprecated))
#else
# define DEPRECATED__tm_rail_interface__srv__RailControl_Response __declspec(deprecated)
#endif

namespace tm_rail_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RailControl_Response_
{
  using Type = RailControl_Response_<ContainerAllocator>;

  explicit RailControl_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0l;
    }
  }

  explicit RailControl_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0l;
    }
  }

  // field types and members
  using _result_type =
    int32_t;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const int32_t & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tm_rail_interface::srv::RailControl_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tm_rail_interface::srv::RailControl_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tm_rail_interface::srv::RailControl_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tm_rail_interface::srv::RailControl_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tm_rail_interface::srv::RailControl_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tm_rail_interface::srv::RailControl_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tm_rail_interface::srv::RailControl_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tm_rail_interface::srv::RailControl_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tm_rail_interface::srv::RailControl_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tm_rail_interface::srv::RailControl_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tm_rail_interface__srv__RailControl_Response
    std::shared_ptr<tm_rail_interface::srv::RailControl_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tm_rail_interface__srv__RailControl_Response
    std::shared_ptr<tm_rail_interface::srv::RailControl_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RailControl_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const RailControl_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RailControl_Response_

// alias to use template instance with default allocator
using RailControl_Response =
  tm_rail_interface::srv::RailControl_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tm_rail_interface

namespace tm_rail_interface
{

namespace srv
{

struct RailControl
{
  using Request = tm_rail_interface::srv::RailControl_Request;
  using Response = tm_rail_interface::srv::RailControl_Response;
};

}  // namespace srv

}  // namespace tm_rail_interface

#endif  // TM_RAIL_INTERFACE__SRV__DETAIL__RAIL_CONTROL__STRUCT_HPP_
