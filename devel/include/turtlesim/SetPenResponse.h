// Generated by gencpp from file turtlesim/SetPenResponse.msg
// DO NOT EDIT!


#ifndef TURTLESIM_MESSAGE_SETPENRESPONSE_H
#define TURTLESIM_MESSAGE_SETPENRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace turtlesim
{
template <class ContainerAllocator>
struct SetPenResponse_
{
  typedef SetPenResponse_<ContainerAllocator> Type;

  SetPenResponse_()
    {
    }
  SetPenResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::turtlesim::SetPenResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtlesim::SetPenResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetPenResponse_

typedef ::turtlesim::SetPenResponse_<std::allocator<void> > SetPenResponse;

typedef boost::shared_ptr< ::turtlesim::SetPenResponse > SetPenResponsePtr;
typedef boost::shared_ptr< ::turtlesim::SetPenResponse const> SetPenResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtlesim::SetPenResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtlesim::SetPenResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace turtlesim

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::turtlesim::SetPenResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlesim::SetPenResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlesim::SetPenResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlesim::SetPenResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlesim::SetPenResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlesim::SetPenResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtlesim::SetPenResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::turtlesim::SetPenResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::turtlesim::SetPenResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtlesim/SetPenResponse";
  }

  static const char* value(const ::turtlesim::SetPenResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtlesim::SetPenResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::turtlesim::SetPenResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtlesim::SetPenResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetPenResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtlesim::SetPenResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::turtlesim::SetPenResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // TURTLESIM_MESSAGE_SETPENRESPONSE_H
