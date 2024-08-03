// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv/MyService.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__MY_SERVICE__STRUCT_HPP_
#define INTERFACES__SRV__DETAIL__MY_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__srv__MyService_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__MyService_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MyService_Request_
{
  using Type = MyService_Request_<ContainerAllocator>;

  explicit MyService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_init)
  {
    (void)_init;
  }

  explicit MyService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _point_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _point_type point;

  // setters for named parameter idiom
  Type & set__point(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->point = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::MyService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::MyService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::MyService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::MyService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::MyService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::MyService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::MyService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::MyService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::MyService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::MyService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__MyService_Request
    std::shared_ptr<interfaces::srv::MyService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__MyService_Request
    std::shared_ptr<interfaces::srv::MyService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyService_Request_ & other) const
  {
    if (this->point != other.point) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyService_Request_

// alias to use template instance with default allocator
using MyService_Request =
  interfaces::srv::MyService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__MyService_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__MyService_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MyService_Response_
{
  using Type = MyService_Response_<ContainerAllocator>;

  explicit MyService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0ll;
    }
  }

  explicit MyService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0ll;
    }
  }

  // field types and members
  using _status_type =
    int64_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const int64_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::MyService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::MyService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::MyService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::MyService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::MyService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::MyService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::MyService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::MyService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::MyService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::MyService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__MyService_Response
    std::shared_ptr<interfaces::srv::MyService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__MyService_Response
    std::shared_ptr<interfaces::srv::MyService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyService_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyService_Response_

// alias to use template instance with default allocator
using MyService_Response =
  interfaces::srv::MyService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct MyService
{
  using Request = interfaces::srv::MyService_Request;
  using Response = interfaces::srv::MyService_Response;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__MY_SERVICE__STRUCT_HPP_
