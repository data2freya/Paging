/*
 * @file: PageTable.cpp
 * @date: 1/28/17
 * @author: Felipe Cabrera
 *
 * Copyright © 2017 Data2. All rights reserved.
 */

#include "Hashing.h"

uint32_t Hashing::hash32(std::string str) {
	uint32_t hash = 2166136261;
	for(char i : str) {
		hash = hash xor i;
		hash = hash * 16777619;
	}
	return hash;
}

uint32_t Hashing::hash32(uint8_t * str, uint32_t size) {
	uint32_t hash = 2166136261;
	for(uint32_t i = 0; i < size; i++) {
		hash = hash xor str[i];
		hash = hash * 16777619;
	}
	return hash;
}

uint32_t Hashing::hash32(uint32_t num) {
	return hash32((uint8_t*)&num, 4);
}

uint64_t Hashing::hash64(std::string str) {
	uint64_t hash = 14695981039346656037llu;
	for(char i : str) {
		hash = hash xor i;
		hash = hash * 1099511628211;
	}
	return hash;
}

uint64_t Hashing::hash64(uint8_t * str, uint32_t size) {
	uint64_t hash = 14695981039346656037llu;
	for(uint32_t i = 0; i < size; i++) {
		hash = hash xor str[i];
		hash = hash * 1099511628211;
	}
	return hash;
}

uint64_t Hashing::hash64(uint64_t num) {
	return hash64((uint8_t*)&num, 8);
}
