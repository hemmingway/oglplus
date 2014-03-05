/**
 *  @file advanced/cloud_trace/cloud_data.hpp
 *  @brief Declares data structures storing cloud parameters
 *
 *  @author Matus Chochlik
 *
 *  Copyright 2008-2014 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */
#ifndef OGLPLUS_ADVANCED_CLOUD_TRACE_CLOUD_DATA_1119071146_HPP
#define OGLPLUS_ADVANCED_CLOUD_TRACE_CLOUD_DATA_1119071146_HPP

#include "app_data.hpp"

#include <oglplus/gl.hpp>
#include <oglplus/fix_gl_version.hpp>
#include <oglplus/buffer.hpp>

namespace oglplus {
namespace cloud_trace {

class CloudData : public Buffer
{
private:
	unsigned count;
public:
	GLuint ub_idx;
	CloudData(const AppData&);

	void Use(void);
	unsigned CloudCount(void) const;
};

} // namespace cloud_trace
} // namespace oglplus

#endif // include guard