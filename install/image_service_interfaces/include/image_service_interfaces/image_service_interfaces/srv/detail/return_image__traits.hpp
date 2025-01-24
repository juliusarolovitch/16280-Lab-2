// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from image_service_interfaces:srv/ReturnImage.idl
// generated code does not contain a copyright notice

#ifndef IMAGE_SERVICE_INTERFACES__SRV__DETAIL__RETURN_IMAGE__TRAITS_HPP_
#define IMAGE_SERVICE_INTERFACES__SRV__DETAIL__RETURN_IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "image_service_interfaces/srv/detail/return_image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace image_service_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReturnImage_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
    out << ", ";
  }

  // member: some_string
  {
    out << "some_string: ";
    rosidl_generator_traits::value_to_yaml(msg.some_string, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReturnImage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_block_style_yaml(msg.image, out, indentation + 2);
  }

  // member: some_string
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "some_string: ";
    rosidl_generator_traits::value_to_yaml(msg.some_string, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReturnImage_Request & msg, bool use_flow_style = false)
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

}  // namespace image_service_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use image_service_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const image_service_interfaces::srv::ReturnImage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  image_service_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use image_service_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const image_service_interfaces::srv::ReturnImage_Request & msg)
{
  return image_service_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<image_service_interfaces::srv::ReturnImage_Request>()
{
  return "image_service_interfaces::srv::ReturnImage_Request";
}

template<>
inline const char * name<image_service_interfaces::srv::ReturnImage_Request>()
{
  return "image_service_interfaces/srv/ReturnImage_Request";
}

template<>
struct has_fixed_size<image_service_interfaces::srv::ReturnImage_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<image_service_interfaces::srv::ReturnImage_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<image_service_interfaces::srv::ReturnImage_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'image'
// already included above
// #include "sensor_msgs/msg/detail/image__traits.hpp"

namespace image_service_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReturnImage_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReturnImage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_block_style_yaml(msg.image, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReturnImage_Response & msg, bool use_flow_style = false)
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

}  // namespace image_service_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use image_service_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const image_service_interfaces::srv::ReturnImage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  image_service_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use image_service_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const image_service_interfaces::srv::ReturnImage_Response & msg)
{
  return image_service_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<image_service_interfaces::srv::ReturnImage_Response>()
{
  return "image_service_interfaces::srv::ReturnImage_Response";
}

template<>
inline const char * name<image_service_interfaces::srv::ReturnImage_Response>()
{
  return "image_service_interfaces/srv/ReturnImage_Response";
}

template<>
struct has_fixed_size<image_service_interfaces::srv::ReturnImage_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<image_service_interfaces::srv::ReturnImage_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<image_service_interfaces::srv::ReturnImage_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<image_service_interfaces::srv::ReturnImage>()
{
  return "image_service_interfaces::srv::ReturnImage";
}

template<>
inline const char * name<image_service_interfaces::srv::ReturnImage>()
{
  return "image_service_interfaces/srv/ReturnImage";
}

template<>
struct has_fixed_size<image_service_interfaces::srv::ReturnImage>
  : std::integral_constant<
    bool,
    has_fixed_size<image_service_interfaces::srv::ReturnImage_Request>::value &&
    has_fixed_size<image_service_interfaces::srv::ReturnImage_Response>::value
  >
{
};

template<>
struct has_bounded_size<image_service_interfaces::srv::ReturnImage>
  : std::integral_constant<
    bool,
    has_bounded_size<image_service_interfaces::srv::ReturnImage_Request>::value &&
    has_bounded_size<image_service_interfaces::srv::ReturnImage_Response>::value
  >
{
};

template<>
struct is_service<image_service_interfaces::srv::ReturnImage>
  : std::true_type
{
};

template<>
struct is_service_request<image_service_interfaces::srv::ReturnImage_Request>
  : std::true_type
{
};

template<>
struct is_service_response<image_service_interfaces::srv::ReturnImage_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // IMAGE_SERVICE_INTERFACES__SRV__DETAIL__RETURN_IMAGE__TRAITS_HPP_
