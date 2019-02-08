// Generated by gencpp from file crazyflie_gazebo/RemoveCrazyflieResponse.msg
// DO NOT EDIT!


#ifndef CRAZYFLIE_GAZEBO_MESSAGE_REMOVECRAZYFLIERESPONSE_H
#define CRAZYFLIE_GAZEBO_MESSAGE_REMOVECRAZYFLIERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace crazyflie_gazebo
{
template <class ContainerAllocator>
struct RemoveCrazyflieResponse_
{
  typedef RemoveCrazyflieResponse_<ContainerAllocator> Type;

  RemoveCrazyflieResponse_()
    {
    }
  RemoveCrazyflieResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::crazyflie_gazebo::RemoveCrazyflieResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::crazyflie_gazebo::RemoveCrazyflieResponse_<ContainerAllocator> const> ConstPtr;

}; // struct RemoveCrazyflieResponse_

typedef ::crazyflie_gazebo::RemoveCrazyflieResponse_<std::allocator<void> > RemoveCrazyflieResponse;

typedef boost::shared_ptr< ::crazyflie_gazebo::RemoveCrazyflieResponse > RemoveCrazyflieResponsePtr;
typedef boost::shared_ptr< ::crazyflie_gazebo::RemoveCrazyflieResponse const> RemoveCrazyflieResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::crazyflie_gazebo::RemoveCrazyflieResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::crazyflie_gazebo::RemoveCrazyflieResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::crazyflie_gazebo::RemoveCrazyflieResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::crazyflie_gazebo::RemoveCrazyflieResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::crazyflie_gazebo::RemoveCrazyflieResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::crazyflie_gazebo::RemoveCrazyflieResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crazyflie_gazebo::RemoveCrazyflieResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crazyflie_gazebo::RemoveCrazyflieResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::crazyflie_gazebo::RemoveCrazyflieResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::crazyflie_gazebo::RemoveCrazyflieResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::crazyflie_gazebo::RemoveCrazyflieResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "crazyflie_gazebo/RemoveCrazyflieResponse";
  }

  static const char* value(const ::crazyflie_gazebo::RemoveCrazyflieResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::crazyflie_gazebo::RemoveCrazyflieResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::crazyflie_gazebo::RemoveCrazyflieResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::crazyflie_gazebo::RemoveCrazyflieResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RemoveCrazyflieResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::crazyflie_gazebo::RemoveCrazyflieResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::crazyflie_gazebo::RemoveCrazyflieResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // CRAZYFLIE_GAZEBO_MESSAGE_REMOVECRAZYFLIERESPONSE_H
