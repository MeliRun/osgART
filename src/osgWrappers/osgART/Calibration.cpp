// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/Camera>
#include <osg/Image>
#include <osgART/Calibration>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgART::Calibration)
	I_DeclaringFile("osgART/Calibration");
	I_BaseType(osg::Referenced);
	I_Constructor0(____Calibration,
	               "C'tor for the calibration. ",
	               "");
	I_Method2(void, setSize, IN, int, width, IN, int, height,
	          Properties::VIRTUAL,
	          __void__setSize__int__int,
	          "Set the size of the actual camera image in pixels. ",
	          " param width width of the camera image  height height of the camera image  ");
	I_Method1(void, setSize, IN, const osg::Image &, image,
	          Properties::NON_VIRTUAL,
	          __void__setSize__C5_osg_Image_R1,
	          "Set the size of the actual camera image in pixels. ",
	          " param image image to be used by the calibration  ");
	I_Method1(bool, load, IN, const std::string &, filename,
	          Properties::VIRTUAL,
	          __bool__load__C5_std_string_R1,
	          "Load a stored calibration from an external file. ",
	          " param filename resource to be loaded into the calibration   return true if the resource could be loaded successful ");
	I_Method0(osg::Camera *, createCamera,
	          Properties::NON_VIRTUAL,
	          __osg_Camera_P1__createCamera,
	          "Creates a camera with a projection matrix representing the loaded intrinsic parameters. ",
	          "camera object  ");
	I_Method4(void, undistort, IN, double, x, IN, double, y, IN, double *, u_x, IN, double *, u_y,
	          Properties::VIRTUAL,
	          __void__undistort__double__double__double_P1__double_P1,
	          "",
	          "");
	I_SimpleProperty(const osg::Image &, Size, 
	                 0, 
	                 __void__setSize__C5_osg_Image_R1);
END_REFLECTOR

