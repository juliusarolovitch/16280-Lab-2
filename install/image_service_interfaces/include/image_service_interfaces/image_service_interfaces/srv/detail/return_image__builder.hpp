// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from image_service_interfaces:srv/ReturnImage.idl
// generated code does not contain a copyright notice

#ifndef IMAGE_SERVICE_INTERFACES__SRV__DETAIL__RETURN_IMAGE__BUILDER_HPP_
#define IMAGE_SERVICE_INTERFACES__SRV__DETAIL__RETURN_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "image_service_interfaces/srv/detail/return_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace image_service_interfaces
{

namespace srv
{

namespace builder
{

class Init_ReturnImage_Request_some_string
{
public:
  explicit Init_ReturnImage_Request_some_string(::image_service_interfaces::srv::ReturnImage_Request & msg)
  : msg_(msg)
  {}
  ::image_service_interfaces::srv::ReturnImage_Request some_string(::image_service_interfaces::srv::ReturnImage_Request::_some_string_type arg)
  {
    msg_.some_string = std::move(arg);
    return std::move(msg_);
  }

private:
  ::image_service_interfaces::srv::ReturnImage_Request msg_;
};

class Init_ReturnImage_Request_image
{
public:
  Init_ReturnImage_Request_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReturnImage_Request_some_string image(::image_service_interfaces::srv::ReturnImage_Request::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_ReturnImage_Request_some_string(msg_);
  }

private:
  ::image_service_interfaces::srv::ReturnImage_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::image_service_interfaces::srv::ReturnImage_Request>()
{
  return image_service_interfaces::srv::builder::Init_ReturnImage_Request_image();
}

}  // namespace image_service_interfaces


namespace image_service_interfaces
{

namespace srv
{

namespace builder
{

class Init_ReturnImage_Response_image
{
public:
  Init_ReturnImage_Response_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::image_service_interfaces::srv::ReturnImage_Response image(::image_service_interfaces::srv::ReturnImage_Response::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::image_service_interfaces::srv::ReturnImage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::image_service_interfaces::srv::ReturnImage_Response>()
{
  return image_service_interfaces::srv::builder::Init_ReturnImage_Response_image();
}

}  // namespace image_service_interfaces

#endif  // IMAGE_SERVICE_INTERFACES__SRV__DETAIL__RETURN_IMAGE__BUILDER_HPP_
