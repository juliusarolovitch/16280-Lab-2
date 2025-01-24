// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from image_service_interfaces:srv/ReturnImage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "image_service_interfaces/srv/detail/return_image__rosidl_typesupport_introspection_c.h"
#include "image_service_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "image_service_interfaces/srv/detail/return_image__functions.h"
#include "image_service_interfaces/srv/detail/return_image__struct.h"


// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/image.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"
// Member `some_string`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void image_service_interfaces__srv__ReturnImage_Request__rosidl_typesupport_introspection_c__ReturnImage_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  image_service_interfaces__srv__ReturnImage_Request__init(message_memory);
}

void image_service_interfaces__srv__ReturnImage_Request__rosidl_typesupport_introspection_c__ReturnImage_Request_fini_function(void * message_memory)
{
  image_service_interfaces__srv__ReturnImage_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember image_service_interfaces__srv__ReturnImage_Request__rosidl_typesupport_introspection_c__ReturnImage_Request_message_member_array[2] = {
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(image_service_interfaces__srv__ReturnImage_Request, image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "some_string",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(image_service_interfaces__srv__ReturnImage_Request, some_string),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers image_service_interfaces__srv__ReturnImage_Request__rosidl_typesupport_introspection_c__ReturnImage_Request_message_members = {
  "image_service_interfaces__srv",  // message namespace
  "ReturnImage_Request",  // message name
  2,  // number of fields
  sizeof(image_service_interfaces__srv__ReturnImage_Request),
  image_service_interfaces__srv__ReturnImage_Request__rosidl_typesupport_introspection_c__ReturnImage_Request_message_member_array,  // message members
  image_service_interfaces__srv__ReturnImage_Request__rosidl_typesupport_introspection_c__ReturnImage_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  image_service_interfaces__srv__ReturnImage_Request__rosidl_typesupport_introspection_c__ReturnImage_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t image_service_interfaces__srv__ReturnImage_Request__rosidl_typesupport_introspection_c__ReturnImage_Request_message_type_support_handle = {
  0,
  &image_service_interfaces__srv__ReturnImage_Request__rosidl_typesupport_introspection_c__ReturnImage_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_image_service_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, image_service_interfaces, srv, ReturnImage_Request)() {
  image_service_interfaces__srv__ReturnImage_Request__rosidl_typesupport_introspection_c__ReturnImage_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!image_service_interfaces__srv__ReturnImage_Request__rosidl_typesupport_introspection_c__ReturnImage_Request_message_type_support_handle.typesupport_identifier) {
    image_service_interfaces__srv__ReturnImage_Request__rosidl_typesupport_introspection_c__ReturnImage_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &image_service_interfaces__srv__ReturnImage_Request__rosidl_typesupport_introspection_c__ReturnImage_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "image_service_interfaces/srv/detail/return_image__rosidl_typesupport_introspection_c.h"
// already included above
// #include "image_service_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "image_service_interfaces/srv/detail/return_image__functions.h"
// already included above
// #include "image_service_interfaces/srv/detail/return_image__struct.h"


// Include directives for member types
// Member `image`
// already included above
// #include "sensor_msgs/msg/image.h"
// Member `image`
// already included above
// #include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void image_service_interfaces__srv__ReturnImage_Response__rosidl_typesupport_introspection_c__ReturnImage_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  image_service_interfaces__srv__ReturnImage_Response__init(message_memory);
}

void image_service_interfaces__srv__ReturnImage_Response__rosidl_typesupport_introspection_c__ReturnImage_Response_fini_function(void * message_memory)
{
  image_service_interfaces__srv__ReturnImage_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember image_service_interfaces__srv__ReturnImage_Response__rosidl_typesupport_introspection_c__ReturnImage_Response_message_member_array[1] = {
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(image_service_interfaces__srv__ReturnImage_Response, image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers image_service_interfaces__srv__ReturnImage_Response__rosidl_typesupport_introspection_c__ReturnImage_Response_message_members = {
  "image_service_interfaces__srv",  // message namespace
  "ReturnImage_Response",  // message name
  1,  // number of fields
  sizeof(image_service_interfaces__srv__ReturnImage_Response),
  image_service_interfaces__srv__ReturnImage_Response__rosidl_typesupport_introspection_c__ReturnImage_Response_message_member_array,  // message members
  image_service_interfaces__srv__ReturnImage_Response__rosidl_typesupport_introspection_c__ReturnImage_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  image_service_interfaces__srv__ReturnImage_Response__rosidl_typesupport_introspection_c__ReturnImage_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t image_service_interfaces__srv__ReturnImage_Response__rosidl_typesupport_introspection_c__ReturnImage_Response_message_type_support_handle = {
  0,
  &image_service_interfaces__srv__ReturnImage_Response__rosidl_typesupport_introspection_c__ReturnImage_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_image_service_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, image_service_interfaces, srv, ReturnImage_Response)() {
  image_service_interfaces__srv__ReturnImage_Response__rosidl_typesupport_introspection_c__ReturnImage_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!image_service_interfaces__srv__ReturnImage_Response__rosidl_typesupport_introspection_c__ReturnImage_Response_message_type_support_handle.typesupport_identifier) {
    image_service_interfaces__srv__ReturnImage_Response__rosidl_typesupport_introspection_c__ReturnImage_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &image_service_interfaces__srv__ReturnImage_Response__rosidl_typesupport_introspection_c__ReturnImage_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "image_service_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "image_service_interfaces/srv/detail/return_image__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers image_service_interfaces__srv__detail__return_image__rosidl_typesupport_introspection_c__ReturnImage_service_members = {
  "image_service_interfaces__srv",  // service namespace
  "ReturnImage",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // image_service_interfaces__srv__detail__return_image__rosidl_typesupport_introspection_c__ReturnImage_Request_message_type_support_handle,
  NULL  // response message
  // image_service_interfaces__srv__detail__return_image__rosidl_typesupport_introspection_c__ReturnImage_Response_message_type_support_handle
};

static rosidl_service_type_support_t image_service_interfaces__srv__detail__return_image__rosidl_typesupport_introspection_c__ReturnImage_service_type_support_handle = {
  0,
  &image_service_interfaces__srv__detail__return_image__rosidl_typesupport_introspection_c__ReturnImage_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, image_service_interfaces, srv, ReturnImage_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, image_service_interfaces, srv, ReturnImage_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_image_service_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, image_service_interfaces, srv, ReturnImage)() {
  if (!image_service_interfaces__srv__detail__return_image__rosidl_typesupport_introspection_c__ReturnImage_service_type_support_handle.typesupport_identifier) {
    image_service_interfaces__srv__detail__return_image__rosidl_typesupport_introspection_c__ReturnImage_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)image_service_interfaces__srv__detail__return_image__rosidl_typesupport_introspection_c__ReturnImage_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, image_service_interfaces, srv, ReturnImage_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, image_service_interfaces, srv, ReturnImage_Response)()->data;
  }

  return &image_service_interfaces__srv__detail__return_image__rosidl_typesupport_introspection_c__ReturnImage_service_type_support_handle;
}
