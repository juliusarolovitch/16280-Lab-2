// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from image_service_interfaces:srv/ReturnImage.idl
// generated code does not contain a copyright notice

#ifndef IMAGE_SERVICE_INTERFACES__SRV__DETAIL__RETURN_IMAGE__STRUCT_H_
#define IMAGE_SERVICE_INTERFACES__SRV__DETAIL__RETURN_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'some_string'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ReturnImage in the package image_service_interfaces.
typedef struct image_service_interfaces__srv__ReturnImage_Request
{
  sensor_msgs__msg__Image image;
  rosidl_runtime_c__String some_string;
} image_service_interfaces__srv__ReturnImage_Request;

// Struct for a sequence of image_service_interfaces__srv__ReturnImage_Request.
typedef struct image_service_interfaces__srv__ReturnImage_Request__Sequence
{
  image_service_interfaces__srv__ReturnImage_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} image_service_interfaces__srv__ReturnImage_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'image'
// already included above
// #include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in srv/ReturnImage in the package image_service_interfaces.
typedef struct image_service_interfaces__srv__ReturnImage_Response
{
  sensor_msgs__msg__Image image;
} image_service_interfaces__srv__ReturnImage_Response;

// Struct for a sequence of image_service_interfaces__srv__ReturnImage_Response.
typedef struct image_service_interfaces__srv__ReturnImage_Response__Sequence
{
  image_service_interfaces__srv__ReturnImage_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} image_service_interfaces__srv__ReturnImage_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IMAGE_SERVICE_INTERFACES__SRV__DETAIL__RETURN_IMAGE__STRUCT_H_
