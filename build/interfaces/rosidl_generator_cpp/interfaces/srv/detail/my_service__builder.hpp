// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/MyService.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__MY_SERVICE__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__MY_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/my_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_MyService_Request_point
{
public:
  Init_MyService_Request_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::MyService_Request point(::interfaces::srv::MyService_Request::_point_type arg)
  {
    msg_.point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::MyService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::MyService_Request>()
{
  return interfaces::srv::builder::Init_MyService_Request_point();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_MyService_Response_status
{
public:
  Init_MyService_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::MyService_Response status(::interfaces::srv::MyService_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::MyService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::MyService_Response>()
{
  return interfaces::srv::builder::Init_MyService_Response_status();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__MY_SERVICE__BUILDER_HPP_
