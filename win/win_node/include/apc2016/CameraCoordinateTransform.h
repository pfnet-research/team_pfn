// Generated by gencpp from file apc2016/CameraCoordinateTransform.msg
// DO NOT EDIT!


#ifndef APC2016_MESSAGE_CAMERACOORDINATETRANSFORM_H
#define APC2016_MESSAGE_CAMERACOORDINATETRANSFORM_H

#include <ros/service_traits.h>


#include <apc2016/CameraCoordinateTransformRequest.h>
#include <apc2016/CameraCoordinateTransformResponse.h>


namespace apc2016
{

struct CameraCoordinateTransform
{

typedef CameraCoordinateTransformRequest Request;
typedef CameraCoordinateTransformResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct CameraCoordinateTransform
} // namespace apc2016


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::apc2016::CameraCoordinateTransform > {
  static const char* value()
  {
    return "cf7833cb204ed4022902129ceb1c7e90";
  }

  static const char* value(const ::apc2016::CameraCoordinateTransform&) { return value(); }
};

template<>
struct DataType< ::apc2016::CameraCoordinateTransform > {
  static const char* value()
  {
    return "apc2016/CameraCoordinateTransform";
  }

  static const char* value(const ::apc2016::CameraCoordinateTransform&) { return value(); }
};


// service_traits::MD5Sum< ::apc2016::CameraCoordinateTransformRequest> should match 
// service_traits::MD5Sum< ::apc2016::CameraCoordinateTransform > 
template<>
struct MD5Sum< ::apc2016::CameraCoordinateTransformRequest>
{
  static const char* value()
  {
    return MD5Sum< ::apc2016::CameraCoordinateTransform >::value();
  }
  static const char* value(const ::apc2016::CameraCoordinateTransformRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::apc2016::CameraCoordinateTransformRequest> should match 
// service_traits::DataType< ::apc2016::CameraCoordinateTransform > 
template<>
struct DataType< ::apc2016::CameraCoordinateTransformRequest>
{
  static const char* value()
  {
    return DataType< ::apc2016::CameraCoordinateTransform >::value();
  }
  static const char* value(const ::apc2016::CameraCoordinateTransformRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::apc2016::CameraCoordinateTransformResponse> should match 
// service_traits::MD5Sum< ::apc2016::CameraCoordinateTransform > 
template<>
struct MD5Sum< ::apc2016::CameraCoordinateTransformResponse>
{
  static const char* value()
  {
    return MD5Sum< ::apc2016::CameraCoordinateTransform >::value();
  }
  static const char* value(const ::apc2016::CameraCoordinateTransformResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::apc2016::CameraCoordinateTransformResponse> should match 
// service_traits::DataType< ::apc2016::CameraCoordinateTransform > 
template<>
struct DataType< ::apc2016::CameraCoordinateTransformResponse>
{
  static const char* value()
  {
    return DataType< ::apc2016::CameraCoordinateTransform >::value();
  }
  static const char* value(const ::apc2016::CameraCoordinateTransformResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // APC2016_MESSAGE_CAMERACOORDINATETRANSFORM_H
