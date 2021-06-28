// //////////////////////////////////////////////////////////
// endian_include.h
// Copyright (c) 2014 Stephan Brumme. All rights reserved.
// see http://create.stephan-brumme.com/disclaimer.html
//

#pragma once

// big endian architectures need #define __BYTE_ORDER __BIG_ENDIAN
#ifndef _MSC_VER
	#ifdef __APPLE__
		#include <machine/endian.h>
	#else
		#include <endian.h>
	#endif
#endif
