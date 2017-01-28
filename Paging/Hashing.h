/*
 * @file: Hashing.h
 * @date:1/18/17
 * @author: Felipe Cabrera
 * @brief: FNV-1a hashing functions.
 *
 * Copyright © 2017 Data2. All rights reserved.
 */

#ifndef HASHING_H
#define HASHING_H

#include <string>
#include "Types.h"

namespace Hashing {
	uint32_t hash32(std::string str);
	uint32_t hash32(uint8_t * str, uint32_t size);
	uint32_t hash32(uint32_t num);
	uint64_t hash64(std::string str);
	uint64_t hash64(uint8_t * str, uint32_t size);
	uint64_t hash64(uint64_t num);
}

#endif // HASHING_H
