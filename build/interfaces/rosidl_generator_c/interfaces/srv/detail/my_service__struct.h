// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/MyService.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__MY_SERVICE__STRUCT_H_
#define INTERFACES__SRV__DETAIL__MY_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in srv/MyService in the package interfaces.
typedef struct interfaces__srv__MyService_Request
{
  geometry_msgs__msg__Point point;
} interfaces__srv__MyService_Request;

// Struct for a sequence of interfaces__srv__MyService_Request.
typedef struct interfaces__srv__MyService_Request__Sequence
{
  interfaces__srv__MyService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__MyService_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/MyService in the package interfaces.
typedef struct interfaces__srv__MyService_Response
{
  int64_t status;
} interfaces__srv__MyService_Response;

// Struct for a sequence of interfaces__srv__MyService_Response.
typedef struct interfaces__srv__MyService_Response__Sequence
{
  interfaces__srv__MyService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__MyService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__MY_SERVICE__STRUCT_H_
