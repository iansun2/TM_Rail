// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tm_rail_interface:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef TM_RAIL_INTERFACE__MSG__DETAIL__STATUS__STRUCT_HPP_
#define TM_RAIL_INTERFACE__MSG__DETAIL__STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tm_rail_interface__msg__Status __attribute__((deprecated))
#else
# define DEPRECATED__tm_rail_interface__msg__Status __declspec(deprecated)
#endif

namespace tm_rail_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Status_
{
  using Type = Status_<ContainerAllocator>;

  explicit Status_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0.0f;
      this->velocity = 0.0f;
      this->homed = false;
      this->busy = false;
      this->bag_detected = false;
    }
  }

  explicit Status_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0.0f;
      this->velocity = 0.0f;
      this->homed = false;
      this->busy = false;
      this->bag_detected = false;
    }
  }

  // field types and members
  using _position_type =
    float;
  _position_type position;
  using _velocity_type =
    float;
  _velocity_type velocity;
  using _homed_type =
    bool;
  _homed_type homed;
  using _busy_type =
    bool;
  _busy_type busy;
  using _bag_detected_type =
    bool;
  _bag_detected_type bag_detected;

  // setters for named parameter idiom
  Type & set__position(
    const float & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const float & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__homed(
    const bool & _arg)
  {
    this->homed = _arg;
    return *this;
  }
  Type & set__busy(
    const bool & _arg)
  {
    this->busy = _arg;
    return *this;
  }
  Type & set__bag_detected(
    const bool & _arg)
  {
    this->bag_detected = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tm_rail_interface::msg::Status_<ContainerAllocator> *;
  using ConstRawPtr =
    const tm_rail_interface::msg::Status_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tm_rail_interface::msg::Status_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tm_rail_interface::msg::Status_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tm_rail_interface::msg::Status_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tm_rail_interface::msg::Status_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tm_rail_interface::msg::Status_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tm_rail_interface::msg::Status_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tm_rail_interface::msg::Status_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tm_rail_interface::msg::Status_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tm_rail_interface__msg__Status
    std::shared_ptr<tm_rail_interface::msg::Status_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tm_rail_interface__msg__Status
    std::shared_ptr<tm_rail_interface::msg::Status_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Status_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->homed != other.homed) {
      return false;
    }
    if (this->busy != other.busy) {
      return false;
    }
    if (this->bag_detected != other.bag_detected) {
      return false;
    }
    return true;
  }
  bool operator!=(const Status_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Status_

// alias to use template instance with default allocator
using Status =
  tm_rail_interface::msg::Status_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tm_rail_interface

#endif  // TM_RAIL_INTERFACE__MSG__DETAIL__STATUS__STRUCT_HPP_
