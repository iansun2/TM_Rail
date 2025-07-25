# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tm_rail_interface:srv/RailControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RailControl_Request(type):
    """Metaclass of message 'RailControl_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tm_rail_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tm_rail_interface.srv.RailControl_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__rail_control__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__rail_control__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__rail_control__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__rail_control__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__rail_control__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RailControl_Request(metaclass=Metaclass_RailControl_Request):
    """Message class 'RailControl_Request'."""

    __slots__ = [
        '_opt_code',
        '_rail_name',
    ]

    _fields_and_field_types = {
        'opt_code': 'int8',
        'rail_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.opt_code = kwargs.get('opt_code', int())
        self.rail_name = kwargs.get('rail_name', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.opt_code != other.opt_code:
            return False
        if self.rail_name != other.rail_name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def opt_code(self):
        """Message field 'opt_code'."""
        return self._opt_code

    @opt_code.setter
    def opt_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'opt_code' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'opt_code' field must be an integer in [-128, 127]"
        self._opt_code = value

    @builtins.property
    def rail_name(self):
        """Message field 'rail_name'."""
        return self._rail_name

    @rail_name.setter
    def rail_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'rail_name' field must be of type 'str'"
        self._rail_name = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RailControl_Response(type):
    """Metaclass of message 'RailControl_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tm_rail_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tm_rail_interface.srv.RailControl_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__rail_control__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__rail_control__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__rail_control__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__rail_control__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__rail_control__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RailControl_Response(metaclass=Metaclass_RailControl_Response):
    """Message class 'RailControl_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'result' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'result' field must be an integer in [-2147483648, 2147483647]"
        self._result = value


class Metaclass_RailControl(type):
    """Metaclass of service 'RailControl'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tm_rail_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tm_rail_interface.srv.RailControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__rail_control

            from tm_rail_interface.srv import _rail_control
            if _rail_control.Metaclass_RailControl_Request._TYPE_SUPPORT is None:
                _rail_control.Metaclass_RailControl_Request.__import_type_support__()
            if _rail_control.Metaclass_RailControl_Response._TYPE_SUPPORT is None:
                _rail_control.Metaclass_RailControl_Response.__import_type_support__()


class RailControl(metaclass=Metaclass_RailControl):
    from tm_rail_interface.srv._rail_control import RailControl_Request as Request
    from tm_rail_interface.srv._rail_control import RailControl_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
