# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from crazyflie_gazebo/UploadTrajectoryRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import genpy
import crazyflie_gazebo.msg

class UploadTrajectoryRequest(genpy.Message):
  _md5sum = "becd7733dfdc3d0c93a9064ba651cf17"
  _type = "crazyflie_gazebo/UploadTrajectoryRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """uint8 trajectoryId
uint32 pieceOffset
TrajectoryPolynomialPiece[] pieces

================================================================================
MSG: crazyflie_gazebo/TrajectoryPolynomialPiece
#

float32[] poly_x
float32[] poly_y
float32[] poly_z
float32[] poly_yaw
duration duration"""
  __slots__ = ['trajectoryId','pieceOffset','pieces']
  _slot_types = ['uint8','uint32','crazyflie_gazebo/TrajectoryPolynomialPiece[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       trajectoryId,pieceOffset,pieces

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(UploadTrajectoryRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.trajectoryId is None:
        self.trajectoryId = 0
      if self.pieceOffset is None:
        self.pieceOffset = 0
      if self.pieces is None:
        self.pieces = []
    else:
      self.trajectoryId = 0
      self.pieceOffset = 0
      self.pieces = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_BI().pack(_x.trajectoryId, _x.pieceOffset))
      length = len(self.pieces)
      buff.write(_struct_I.pack(length))
      for val1 in self.pieces:
        length = len(val1.poly_x)
        buff.write(_struct_I.pack(length))
        pattern = '<%sf'%length
        buff.write(struct.pack(pattern, *val1.poly_x))
        length = len(val1.poly_y)
        buff.write(_struct_I.pack(length))
        pattern = '<%sf'%length
        buff.write(struct.pack(pattern, *val1.poly_y))
        length = len(val1.poly_z)
        buff.write(_struct_I.pack(length))
        pattern = '<%sf'%length
        buff.write(struct.pack(pattern, *val1.poly_z))
        length = len(val1.poly_yaw)
        buff.write(_struct_I.pack(length))
        pattern = '<%sf'%length
        buff.write(struct.pack(pattern, *val1.poly_yaw))
        _v1 = val1.duration
        _x = _v1
        buff.write(_get_struct_2i().pack(_x.secs, _x.nsecs))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.pieces is None:
        self.pieces = None
      end = 0
      _x = self
      start = end
      end += 5
      (_x.trajectoryId, _x.pieceOffset,) = _get_struct_BI().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.pieces = []
      for i in range(0, length):
        val1 = crazyflie_gazebo.msg.TrajectoryPolynomialPiece()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sf'%length
        start = end
        end += struct.calcsize(pattern)
        val1.poly_x = struct.unpack(pattern, str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sf'%length
        start = end
        end += struct.calcsize(pattern)
        val1.poly_y = struct.unpack(pattern, str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sf'%length
        start = end
        end += struct.calcsize(pattern)
        val1.poly_z = struct.unpack(pattern, str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sf'%length
        start = end
        end += struct.calcsize(pattern)
        val1.poly_yaw = struct.unpack(pattern, str[start:end])
        _v2 = val1.duration
        _x = _v2
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2i().unpack(str[start:end])
        self.pieces.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_BI().pack(_x.trajectoryId, _x.pieceOffset))
      length = len(self.pieces)
      buff.write(_struct_I.pack(length))
      for val1 in self.pieces:
        length = len(val1.poly_x)
        buff.write(_struct_I.pack(length))
        pattern = '<%sf'%length
        buff.write(val1.poly_x.tostring())
        length = len(val1.poly_y)
        buff.write(_struct_I.pack(length))
        pattern = '<%sf'%length
        buff.write(val1.poly_y.tostring())
        length = len(val1.poly_z)
        buff.write(_struct_I.pack(length))
        pattern = '<%sf'%length
        buff.write(val1.poly_z.tostring())
        length = len(val1.poly_yaw)
        buff.write(_struct_I.pack(length))
        pattern = '<%sf'%length
        buff.write(val1.poly_yaw.tostring())
        _v3 = val1.duration
        _x = _v3
        buff.write(_get_struct_2i().pack(_x.secs, _x.nsecs))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.pieces is None:
        self.pieces = None
      end = 0
      _x = self
      start = end
      end += 5
      (_x.trajectoryId, _x.pieceOffset,) = _get_struct_BI().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.pieces = []
      for i in range(0, length):
        val1 = crazyflie_gazebo.msg.TrajectoryPolynomialPiece()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sf'%length
        start = end
        end += struct.calcsize(pattern)
        val1.poly_x = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sf'%length
        start = end
        end += struct.calcsize(pattern)
        val1.poly_y = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sf'%length
        start = end
        end += struct.calcsize(pattern)
        val1.poly_z = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sf'%length
        start = end
        end += struct.calcsize(pattern)
        val1.poly_yaw = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
        _v4 = val1.duration
        _x = _v4
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2i().unpack(str[start:end])
        self.pieces.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_BI = None
def _get_struct_BI():
    global _struct_BI
    if _struct_BI is None:
        _struct_BI = struct.Struct("<BI")
    return _struct_BI
_struct_2i = None
def _get_struct_2i():
    global _struct_2i
    if _struct_2i is None:
        _struct_2i = struct.Struct("<2i")
    return _struct_2i
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from crazyflie_gazebo/UploadTrajectoryResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class UploadTrajectoryResponse(genpy.Message):
  _md5sum = "d41d8cd98f00b204e9800998ecf8427e"
  _type = "crazyflie_gazebo/UploadTrajectoryResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
"""
  __slots__ = []
  _slot_types = []

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(UploadTrajectoryResponse, self).__init__(*args, **kwds)

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
class UploadTrajectory(object):
  _type          = 'crazyflie_gazebo/UploadTrajectory'
  _md5sum = 'becd7733dfdc3d0c93a9064ba651cf17'
  _request_class  = UploadTrajectoryRequest
  _response_class = UploadTrajectoryResponse
