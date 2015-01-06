//  File implement/oglplus/enums/transform_feedback_primitive_type_names.ipp
//
//  Automatically generated file, DO NOT modify manually.
//  Edit the source 'source/enums/oglplus/transform_feedback_primitive_type.txt'
//  or the 'source/enums/make_enum.py' script instead.
//
//  Copyright 2010-2015 Matus Chochlik.
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt
//
namespace enums {
OGLPLUS_LIB_FUNC StrCRef ValueName_(
	TransformFeedbackPrimitiveType*,
	GLenum value
)
#if (!OGLPLUS_LINK_LIBRARY || defined(OGLPLUS_IMPLEMENTING_LIBRARY)) && \
	!defined(OGLPLUS_IMPL_EVN_TRANSFORMFEEDBACKPRIMITIVETYPE)
#define OGLPLUS_IMPL_EVN_TRANSFORMFEEDBACKPRIMITIVETYPE
{
switch(value)
{
#if defined GL_TRIANGLES
	case GL_TRIANGLES: return StrCRef("TRIANGLES");
#endif
#if defined GL_LINES
	case GL_LINES: return StrCRef("LINES");
#endif
#if defined GL_POINTS
	case GL_POINTS: return StrCRef("POINTS");
#endif
	default:;
}
OGLPLUS_FAKE_USE(value);
return StrCRef();
}
#else
;
#endif
} // namespace enums

