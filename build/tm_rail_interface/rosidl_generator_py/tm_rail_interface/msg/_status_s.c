// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tm_rail_interface:msg/Status.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "tm_rail_interface/msg/detail/status__struct.h"
#include "tm_rail_interface/msg/detail/status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tm_rail_interface__msg__status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("tm_rail_interface.msg._status.Status", full_classname_dest, 36) == 0);
  }
  tm_rail_interface__msg__Status * ros_message = _ros_message;
  {  // position
    PyObject * field = PyObject_GetAttrString(_pymsg, "position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // homed
    PyObject * field = PyObject_GetAttrString(_pymsg, "homed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->homed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // busy
    PyObject * field = PyObject_GetAttrString(_pymsg, "busy");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->busy = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bag_detected
    PyObject * field = PyObject_GetAttrString(_pymsg, "bag_detected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bag_detected = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tm_rail_interface__msg__status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Status */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tm_rail_interface.msg._status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Status");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tm_rail_interface__msg__Status * ros_message = (tm_rail_interface__msg__Status *)raw_ros_message;
  {  // position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // homed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->homed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "homed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // busy
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->busy ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "busy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bag_detected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bag_detected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bag_detected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
