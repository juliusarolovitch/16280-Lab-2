// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from image_service_interfaces:srv/ReturnImage.idl
// generated code does not contain a copyright notice
#include "image_service_interfaces/srv/detail/return_image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `some_string`
#include "rosidl_runtime_c/string_functions.h"

bool
image_service_interfaces__srv__ReturnImage_Request__init(image_service_interfaces__srv__ReturnImage_Request * msg)
{
  if (!msg) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    image_service_interfaces__srv__ReturnImage_Request__fini(msg);
    return false;
  }
  // some_string
  if (!rosidl_runtime_c__String__init(&msg->some_string)) {
    image_service_interfaces__srv__ReturnImage_Request__fini(msg);
    return false;
  }
  return true;
}

void
image_service_interfaces__srv__ReturnImage_Request__fini(image_service_interfaces__srv__ReturnImage_Request * msg)
{
  if (!msg) {
    return;
  }
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
  // some_string
  rosidl_runtime_c__String__fini(&msg->some_string);
}

bool
image_service_interfaces__srv__ReturnImage_Request__are_equal(const image_service_interfaces__srv__ReturnImage_Request * lhs, const image_service_interfaces__srv__ReturnImage_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  // some_string
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->some_string), &(rhs->some_string)))
  {
    return false;
  }
  return true;
}

bool
image_service_interfaces__srv__ReturnImage_Request__copy(
  const image_service_interfaces__srv__ReturnImage_Request * input,
  image_service_interfaces__srv__ReturnImage_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  // some_string
  if (!rosidl_runtime_c__String__copy(
      &(input->some_string), &(output->some_string)))
  {
    return false;
  }
  return true;
}

image_service_interfaces__srv__ReturnImage_Request *
image_service_interfaces__srv__ReturnImage_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  image_service_interfaces__srv__ReturnImage_Request * msg = (image_service_interfaces__srv__ReturnImage_Request *)allocator.allocate(sizeof(image_service_interfaces__srv__ReturnImage_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(image_service_interfaces__srv__ReturnImage_Request));
  bool success = image_service_interfaces__srv__ReturnImage_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
image_service_interfaces__srv__ReturnImage_Request__destroy(image_service_interfaces__srv__ReturnImage_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    image_service_interfaces__srv__ReturnImage_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
image_service_interfaces__srv__ReturnImage_Request__Sequence__init(image_service_interfaces__srv__ReturnImage_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  image_service_interfaces__srv__ReturnImage_Request * data = NULL;

  if (size) {
    data = (image_service_interfaces__srv__ReturnImage_Request *)allocator.zero_allocate(size, sizeof(image_service_interfaces__srv__ReturnImage_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = image_service_interfaces__srv__ReturnImage_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        image_service_interfaces__srv__ReturnImage_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
image_service_interfaces__srv__ReturnImage_Request__Sequence__fini(image_service_interfaces__srv__ReturnImage_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      image_service_interfaces__srv__ReturnImage_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

image_service_interfaces__srv__ReturnImage_Request__Sequence *
image_service_interfaces__srv__ReturnImage_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  image_service_interfaces__srv__ReturnImage_Request__Sequence * array = (image_service_interfaces__srv__ReturnImage_Request__Sequence *)allocator.allocate(sizeof(image_service_interfaces__srv__ReturnImage_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = image_service_interfaces__srv__ReturnImage_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
image_service_interfaces__srv__ReturnImage_Request__Sequence__destroy(image_service_interfaces__srv__ReturnImage_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    image_service_interfaces__srv__ReturnImage_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
image_service_interfaces__srv__ReturnImage_Request__Sequence__are_equal(const image_service_interfaces__srv__ReturnImage_Request__Sequence * lhs, const image_service_interfaces__srv__ReturnImage_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!image_service_interfaces__srv__ReturnImage_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
image_service_interfaces__srv__ReturnImage_Request__Sequence__copy(
  const image_service_interfaces__srv__ReturnImage_Request__Sequence * input,
  image_service_interfaces__srv__ReturnImage_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(image_service_interfaces__srv__ReturnImage_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    image_service_interfaces__srv__ReturnImage_Request * data =
      (image_service_interfaces__srv__ReturnImage_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!image_service_interfaces__srv__ReturnImage_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          image_service_interfaces__srv__ReturnImage_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!image_service_interfaces__srv__ReturnImage_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `image`
// already included above
// #include "sensor_msgs/msg/detail/image__functions.h"

bool
image_service_interfaces__srv__ReturnImage_Response__init(image_service_interfaces__srv__ReturnImage_Response * msg)
{
  if (!msg) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    image_service_interfaces__srv__ReturnImage_Response__fini(msg);
    return false;
  }
  return true;
}

void
image_service_interfaces__srv__ReturnImage_Response__fini(image_service_interfaces__srv__ReturnImage_Response * msg)
{
  if (!msg) {
    return;
  }
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
}

bool
image_service_interfaces__srv__ReturnImage_Response__are_equal(const image_service_interfaces__srv__ReturnImage_Response * lhs, const image_service_interfaces__srv__ReturnImage_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  return true;
}

bool
image_service_interfaces__srv__ReturnImage_Response__copy(
  const image_service_interfaces__srv__ReturnImage_Response * input,
  image_service_interfaces__srv__ReturnImage_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  return true;
}

image_service_interfaces__srv__ReturnImage_Response *
image_service_interfaces__srv__ReturnImage_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  image_service_interfaces__srv__ReturnImage_Response * msg = (image_service_interfaces__srv__ReturnImage_Response *)allocator.allocate(sizeof(image_service_interfaces__srv__ReturnImage_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(image_service_interfaces__srv__ReturnImage_Response));
  bool success = image_service_interfaces__srv__ReturnImage_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
image_service_interfaces__srv__ReturnImage_Response__destroy(image_service_interfaces__srv__ReturnImage_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    image_service_interfaces__srv__ReturnImage_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
image_service_interfaces__srv__ReturnImage_Response__Sequence__init(image_service_interfaces__srv__ReturnImage_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  image_service_interfaces__srv__ReturnImage_Response * data = NULL;

  if (size) {
    data = (image_service_interfaces__srv__ReturnImage_Response *)allocator.zero_allocate(size, sizeof(image_service_interfaces__srv__ReturnImage_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = image_service_interfaces__srv__ReturnImage_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        image_service_interfaces__srv__ReturnImage_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
image_service_interfaces__srv__ReturnImage_Response__Sequence__fini(image_service_interfaces__srv__ReturnImage_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      image_service_interfaces__srv__ReturnImage_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

image_service_interfaces__srv__ReturnImage_Response__Sequence *
image_service_interfaces__srv__ReturnImage_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  image_service_interfaces__srv__ReturnImage_Response__Sequence * array = (image_service_interfaces__srv__ReturnImage_Response__Sequence *)allocator.allocate(sizeof(image_service_interfaces__srv__ReturnImage_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = image_service_interfaces__srv__ReturnImage_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
image_service_interfaces__srv__ReturnImage_Response__Sequence__destroy(image_service_interfaces__srv__ReturnImage_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    image_service_interfaces__srv__ReturnImage_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
image_service_interfaces__srv__ReturnImage_Response__Sequence__are_equal(const image_service_interfaces__srv__ReturnImage_Response__Sequence * lhs, const image_service_interfaces__srv__ReturnImage_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!image_service_interfaces__srv__ReturnImage_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
image_service_interfaces__srv__ReturnImage_Response__Sequence__copy(
  const image_service_interfaces__srv__ReturnImage_Response__Sequence * input,
  image_service_interfaces__srv__ReturnImage_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(image_service_interfaces__srv__ReturnImage_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    image_service_interfaces__srv__ReturnImage_Response * data =
      (image_service_interfaces__srv__ReturnImage_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!image_service_interfaces__srv__ReturnImage_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          image_service_interfaces__srv__ReturnImage_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!image_service_interfaces__srv__ReturnImage_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
