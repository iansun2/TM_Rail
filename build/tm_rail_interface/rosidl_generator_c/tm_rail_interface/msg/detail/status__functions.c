// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tm_rail_interface:msg/Status.idl
// generated code does not contain a copyright notice
#include "tm_rail_interface/msg/detail/status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tm_rail_interface__msg__Status__init(tm_rail_interface__msg__Status * msg)
{
  if (!msg) {
    return false;
  }
  // position
  // velocity
  // homed
  // busy
  // bag_detected
  return true;
}

void
tm_rail_interface__msg__Status__fini(tm_rail_interface__msg__Status * msg)
{
  if (!msg) {
    return;
  }
  // position
  // velocity
  // homed
  // busy
  // bag_detected
}

bool
tm_rail_interface__msg__Status__are_equal(const tm_rail_interface__msg__Status * lhs, const tm_rail_interface__msg__Status * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // homed
  if (lhs->homed != rhs->homed) {
    return false;
  }
  // busy
  if (lhs->busy != rhs->busy) {
    return false;
  }
  // bag_detected
  if (lhs->bag_detected != rhs->bag_detected) {
    return false;
  }
  return true;
}

bool
tm_rail_interface__msg__Status__copy(
  const tm_rail_interface__msg__Status * input,
  tm_rail_interface__msg__Status * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  output->position = input->position;
  // velocity
  output->velocity = input->velocity;
  // homed
  output->homed = input->homed;
  // busy
  output->busy = input->busy;
  // bag_detected
  output->bag_detected = input->bag_detected;
  return true;
}

tm_rail_interface__msg__Status *
tm_rail_interface__msg__Status__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tm_rail_interface__msg__Status * msg = (tm_rail_interface__msg__Status *)allocator.allocate(sizeof(tm_rail_interface__msg__Status), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tm_rail_interface__msg__Status));
  bool success = tm_rail_interface__msg__Status__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tm_rail_interface__msg__Status__destroy(tm_rail_interface__msg__Status * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tm_rail_interface__msg__Status__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tm_rail_interface__msg__Status__Sequence__init(tm_rail_interface__msg__Status__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tm_rail_interface__msg__Status * data = NULL;

  if (size) {
    data = (tm_rail_interface__msg__Status *)allocator.zero_allocate(size, sizeof(tm_rail_interface__msg__Status), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tm_rail_interface__msg__Status__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tm_rail_interface__msg__Status__fini(&data[i - 1]);
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
tm_rail_interface__msg__Status__Sequence__fini(tm_rail_interface__msg__Status__Sequence * array)
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
      tm_rail_interface__msg__Status__fini(&array->data[i]);
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

tm_rail_interface__msg__Status__Sequence *
tm_rail_interface__msg__Status__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tm_rail_interface__msg__Status__Sequence * array = (tm_rail_interface__msg__Status__Sequence *)allocator.allocate(sizeof(tm_rail_interface__msg__Status__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tm_rail_interface__msg__Status__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tm_rail_interface__msg__Status__Sequence__destroy(tm_rail_interface__msg__Status__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tm_rail_interface__msg__Status__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tm_rail_interface__msg__Status__Sequence__are_equal(const tm_rail_interface__msg__Status__Sequence * lhs, const tm_rail_interface__msg__Status__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tm_rail_interface__msg__Status__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tm_rail_interface__msg__Status__Sequence__copy(
  const tm_rail_interface__msg__Status__Sequence * input,
  tm_rail_interface__msg__Status__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tm_rail_interface__msg__Status);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tm_rail_interface__msg__Status * data =
      (tm_rail_interface__msg__Status *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tm_rail_interface__msg__Status__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tm_rail_interface__msg__Status__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tm_rail_interface__msg__Status__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
