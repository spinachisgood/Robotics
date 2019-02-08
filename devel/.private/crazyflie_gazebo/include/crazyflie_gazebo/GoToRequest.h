// Generated by gencpp from file crazyflie_gazebo/GoToRequest.msg
// DO NOT EDIT!


#ifndef CRAZYFLIE_GAZEBO_MESSAGE_GOTOREQUEST_H
#define CRAZYFLIE_GAZEBO_MESSAGE_GOTOREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>

namespace crazyflie_gazebo
{
template <class ContainerAllocator>
struct GoToRequest_
{
  typedef GoToRequest_<ContainerAllocator> Type;

  GoToRequest_()
    : groupMask(0)
    , relative(false)
    , goal()
    , yaw(0.0)
    , duration()  {
    }
  GoToRequest_(const ContainerAllocator& _alloc)
    : groupMask(0)
    , relative(false)
    , goal(_alloc)
    , yaw(0.0)
    , duration()  {
  (void)_alloc;
    }



   typedef uint8_t _groupMask_type;
  _groupMask_type groupMask;

   typedef uint8_t _relative_type;
  _relative_type relative;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _goal_type;
  _goal_type goal;

   typedef float _yaw_type;
  _yaw_type yaw;

   typedef ros::Duration _duration_type;
  _duration_type duration;





  typedef boost::shared_ptr< ::crazyflie_gazebo::GoToRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::crazyflie_gazebo::GoToRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GoToRequest_

typedef ::crazyflie_gazebo::GoToRequest_<std::allocator<void> > GoToRequest;

typedef boost::shared_ptr< ::crazyflie_gazebo::GoToRequest > GoToRequestPtr;
typedef boost::shared_ptr< ::crazyflie_gazebo::GoToRequest const> GoToRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::crazyflie_gazebo::GoToRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::crazyflie_gazebo::GoToRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace crazyflie_gazebo

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'crazyflie_gazebo': ['/home/robot/dd2419_ws/src/course_packages/sim_cf/crazyflie_gazebo/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::crazyflie_gazebo::GoToRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::crazyflie_gazebo::GoToRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::crazyflie_gazebo::GoToRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::crazyflie_gazebo::GoToRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crazyflie_gazebo::GoToRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crazyflie_gazebo::GoToRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::crazyflie_gazebo::GoToRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "82856b48a972d6af023d961a655bcf75";
  }

  static const char* value(const ::crazyflie_gazebo::GoToRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x82856b48a972d6afULL;
  static const uint64_t static_value2 = 0x023d961a655bcf75ULL;
};

template<class ContainerAllocator>
struct DataType< ::crazyflie_gazebo::GoToRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "crazyflie_gazebo/GoToRequest";
  }

  static const char* value(const ::crazyflie_gazebo::GoToRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::crazyflie_gazebo::GoToRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 groupMask\n\
bool relative\n\
geometry_msgs/Point goal\n\
float32 yaw\n\
duration duration\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::crazyflie_gazebo::GoToRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::crazyflie_gazebo::GoToRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.groupMask);
      stream.next(m.relative);
      stream.next(m.goal);
      stream.next(m.yaw);
      stream.next(m.duration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GoToRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::crazyflie_gazebo::GoToRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::crazyflie_gazebo::GoToRequest_<ContainerAllocator>& v)
  {
    s << indent << "groupMask: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.groupMask);
    s << indent << "relative: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.relative);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
    s << indent << "duration: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.duration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRAZYFLIE_GAZEBO_MESSAGE_GOTOREQUEST_H
