/*
 * @file: PageTable.cpp
 * @date: 1/18/17
 * @author: Felipe Cabrera
 *
 * Copyright © 2017 Data2. All rights reserved.
 */

#include "PageTable.h"
#include "Types.h"
#include <cstdio>
#include <iostream>

Memory::PageTable::PageTable() {
	table1 = new uint32_t [0x100] {0};
	table2 = new uint64_t [0x100] {0};
	index = 0x100;
}

Memory::PageTable::~PageTable() {
	delete [] table1;
	delete [] table2;
}

uint64_t Memory::PageTable::operator[] (uint64_t vaddr) {
	uint64_t _index = vaddr >> 28;
	uint64_t pos = (vaddr >> 24) & 0xff;
	printf(" * Accessing table1[0x%llx]\n", _index);
	if(index != _index) {
		printf(" * Replacing second level page from 0x%llx to 0x%llx\n", index, _index);
		storeTable2();
		index = _index;
		loadTable2();
		index = _index;
	}
	if (!(table2[pos] & 1)) {
		printf(" * Page is not present\n");
		table2[pos] = table2[pos] | 1;
	}
	return (table2[pos] & ~0xfffff) | (vaddr & 0xfffff);
}

void Memory::PageTable::loadTable2() {
	
}

void Memory::PageTable::storeTable2() {
	
}
