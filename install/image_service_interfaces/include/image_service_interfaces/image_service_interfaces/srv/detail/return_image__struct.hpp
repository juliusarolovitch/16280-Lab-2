// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from image_service_interfaces:srv/ReturnImage.idl
// generated code does not contain a copyright notice

#ifndef IMAGE_SERVICE_INTERFACES__SRV__DETAIL__RETURN_IMAGE__STRUCT_HPP_
#define IMAGE_SERVICE_INTERFACES__SRV__DETAIL__RETURN_IMAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__image_service_interfaces__srv__ReturnImage_Request __attribute__((deprecated))
#else
# define DEPRECATED__image_service_interfaces__srv__ReturnImage_Request __declspec(deprecated)
#endif

namespace image_service_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ReturnImage_Request_
{
  using Type = ReturnImage_Request_<ContainerAllocator>;

  explicit ReturnImage_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->some_string = "";
    }
  }

  explicit ReturnImage_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_alloc, _init),
    some_string(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->some_string = "";
    }
  }

  // field types and members
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;
  using _some_string_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _some_string_type some_string;

  // setters for named parameter idiom
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }
  Type & set__some_string(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->some_string = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    image_service_interfaces::srv::ReturnImage_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const image_service_interfaces::srv::ReturnImage_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<image_service_interfaces::srv::ReturnImage_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<image_service_interfaces::srv::ReturnImage_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      image_service_interfaces::srv::ReturnImage_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<image_service_interfaces::srv::ReturnImage_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      image_service_interfaces::srv::ReturnImage_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<image_service_interfaces::srv::ReturnImage_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<image_service_interfaces::srv::ReturnImage_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<image_service_interfaces::srv::ReturnImage_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__image_service_interfaces__srv__ReturnImage_Request
    std::shared_ptr<image_service_interfaces::srv::ReturnImage_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__image_service_interfaces__srv__ReturnImage_Request
    std::shared_ptr<image_service_interfaces::srv::ReturnImage_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReturnImage_Request_ & other) const
  {
    if (this->image != other.image) {
      return false;
    }
    if (this->some_string != other.some_string) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReturnImage_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReturnImage_Request_

// alias to use template instance with default allocator
using ReturnImage_Request =
  image_service_interfaces::srv::ReturnImage_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace image_service_interfaces


// Include directives for member types
// Member 'image'
// already included above
// #include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__image_service_interfaces__srv__ReturnImage_Response __attribute__((deprecated))
#else
# define DEPRECATED__image_service_interfaces__srv__ReturnImage_Response __declspec(deprecated)
#endif

namespace image_service_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ReturnImage_Response_
{
  using Type = ReturnImage_Response_<ContainerAllocator>;

  explicit ReturnImage_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_init)
  {
    (void)_init;
  }

  explicit ReturnImage_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;

  // setters for named parameter idiom
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    image_service_interfaces::srv::ReturnImage_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const image_service_interfaces::srv::ReturnImage_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<image_service_interfaces::srv::ReturnImage_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<image_service_interfaces::srv::ReturnImage_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      image_service_interfaces::srv::ReturnImage_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<image_service_interfaces::srv::ReturnImage_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      image_service_interfaces::srv::ReturnImage_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<image_service_interfaces::srv::ReturnImage_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<image_service_interfaces::srv::ReturnImage_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<image_service_interfaces::srv::ReturnImage_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__image_service_interfaces__srv__ReturnImage_Response
    std::shared_ptr<image_service_interfaces::srv::ReturnImage_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__image_service_interfaces__srv__ReturnImage_Response
    std::shared_ptr<image_service_interfaces::srv::ReturnImage_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReturnImage_Response_ & other) const
  {
    if (this->image != other.image) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReturnImage_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReturnImage_Response_

// alias to use template instance with default allocator
using ReturnImage_Response =
  image_service_interfaces::srv::ReturnImage_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace image_service_interfaces

namespace image_service_interfaces
{

namespace srv
{

struct ReturnImage
{
  using Request = image_service_interfaces::srv::ReturnImage_Request;
  using Response = image_service_interfaces::srv::ReturnImage_Response;
};

}  // namespace srv

}  // namespace image_service_interfaces

#endif  // IMAGE_SERVICE_INTERFACES__SRV__DETAIL__RETURN_IMAGE__STRUCT_HPP_
