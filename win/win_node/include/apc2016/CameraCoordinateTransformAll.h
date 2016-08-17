// Generated by gencpp from file apc2016/CameraCoordinateTransformAll.msg
// DO NOT EDIT!


#ifndef APC2016_MESSAGE_CAMERACOORDINATETRANSFORMALL_H
#define APC2016_MESSAGE_CAMERACOORDINATETRANSFORMALL_H

#include <ros/service_traits.h>


#include <apc2016/CameraCoordinateTransformAllRequest.h>
#include <apc2016/CameraCoordinateTransformAllResponse.h>


namespace apc2016
{

struct CameraCoordinateTransformAll
{

typedef CameraCoordinateTransformAllRequest Request;
typedef CameraCoordinateTransformAllResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct CameraCoordinateTransformAll
} // namespace apc2016


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::apc2016::CameraCoordinateTransformAll > {
  static const char* value()
  {
    return "a5ad9e25f6eda3b39cb9cd4f0392ce29";
  }

  static const char* value(const ::apc2016::CameraCoordinateTransformAll&) { return value(); }
};

template<>
struct DataType< ::apc2016::CameraCoordinateTransformAll > {
  static const char* value()
  {
    return "apc2016/CameraCoordinateTransformAll";
  }

  static const char* value(const ::apc2016::CameraCoordinateTransformAll&) { return value(); }
};


// service_traits::MD5Sum< ::apc2016::CameraCoordinateTransformAllRequest> should match 
// service_traits::MD5Sum< ::apc2016::CameraCoordinateTransformAll > 
template<>
struct MD5Sum< ::apc2016::CameraCoordinateTransformAllRequest>
{
  static const char* value()
  {
    return MD5Sum< ::apc2016::CameraCoordinateTransformAll >::value();
  }
  static const char* value(const ::apc2016::CameraCoordinateTransformAllRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::apc2016::CameraCoordinateTransformAllRequest> should match 
// service_traits::DataType< ::apc2016::CameraCoordinateTransformAll > 
template<>
struct DataType< ::apc2016::CameraCoordinateTransformAllRequest>
{
  static const char* value()
  {
    return DataType< ::apc2016::CameraCoordinateTransformAll >::value();
  }
  static const char* value(const ::apc2016::CameraCoordinateTransformAllRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::apc2016::CameraCoordinateTransformAllResponse> should match 
// service_traits::MD5Sum< ::apc2016::CameraCoordinateTransformAll > 
template<>
struct MD5Sum< ::apc2016::CameraCoordinateTransformAllResponse>
{
  static const char* value()
  {
    return MD5Sum< ::apc2016::CameraCoordinateTransformAll >::value();
  }
  static const char* value(const ::apc2016::CameraCoordinateTransformAllResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::apc2016::CameraCoordinateTransformAllResponse> should match 
// service_traits::DataType< ::apc2016::CameraCoordinateTransformAll > 
template<>
struct DataType< ::apc2016::CameraCoordinateTransformAllResponse>
{
  static const char* value()
  {
    return DataType< ::apc2016::CameraCoordinateTransformAll >::value();
  }
  static const char* value(const ::apc2016::CameraCoordinateTransformAllResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // APC2016_MESSAGE_CAMERACOORDINATETRANSFORMALL_H