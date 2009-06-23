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

#include <osg/Node>
#include <osg/NodeVisitor>
#include <osgART/Marker>
#include <osgART/MarkerCallback>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgART::DoubleMarkerCallback)
	I_DeclaringFile("osgART/MarkerCallback");
	I_BaseType(osg::NodeCallback);
	I_Constructor2(IN, osgART::Marker *, markerA, IN, osgART::Marker *, b,
	               ____DoubleMarkerCallback__Marker_P1__Marker_P1,
	               "",
	               "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgART::LocalTransformationCallback)
	I_DeclaringFile("osgART/MarkerCallback");
	I_BaseType(osgART::DoubleMarkerCallback);
	I_Constructor2(IN, osgART::Marker *, base, IN, osgART::Marker *, paddle,
	               ____LocalTransformationCallback__Marker_P1__Marker_P1,
	               "",
	               "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgART::MarkerDebugCallback)
	I_DeclaringFile("osgART/MarkerCallback");
	I_BaseType(osgART::SingleMarkerCallback);
	I_Constructor1(IN, osgART::Marker *, marker,
	               Properties::NON_EXPLICIT,
	               ____MarkerDebugCallback__Marker_P1,
	               "",
	               "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgART::MarkerTransformCallback)
	I_DeclaringFile("osgART/MarkerCallback");
	I_BaseType(osgART::SingleMarkerCallback);
	I_Constructor1(IN, osgART::Marker *, marker,
	               Properties::NON_EXPLICIT,
	               ____MarkerTransformCallback__Marker_P1,
	               "",
	               "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgART::MarkerVisibilityCallback)
	I_DeclaringFile("osgART/MarkerCallback");
	I_BaseType(osgART::SingleMarkerCallback);
	I_Constructor1(IN, osgART::Marker *, marker,
	               Properties::NON_EXPLICIT,
	               ____MarkerVisibilityCallback__Marker_P1,
	               "",
	               "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgART::SingleMarkerCallback)
	I_DeclaringFile("osgART/MarkerCallback");
	I_BaseType(osg::NodeCallback);
	I_Constructor1(IN, osgART::Marker *, marker,
	               Properties::NON_EXPLICIT,
	               ____SingleMarkerCallback__Marker_P1,
	               "",
	               "");
END_REFLECTOR

