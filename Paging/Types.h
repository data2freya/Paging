/*
 * @file: Types.h
 * @date: 1/18/17
 * @author: Felipe Cabrera
 * @discussion: macOS actually has this types built-in but
 * they fit with these. Linux has these types defined in
 * <ctypes> so unless you mix this with <ctypes> will
 * have no problems (I am not sure if <cstdio> includes
 * <ctypes>, possible source of error).
 *
 * Copyright © 2017 Data2. All rights reserved.
 */

#pragma once

typedef unsigned char		uint8_t;
typedef unsigned short		uint16_t;
typedef unsigned int			uint32_t;
typedef unsigned long long	uint64_t;

typedef signed char			int8_t;
typedef signed short			int16_t;
typedef signed int			int32_t;
typedef signed long long		int64_t;

typedef unsigned long		size_t;
typedef signed long			ssize_t;
