/*
 * @file: Process.cpp
 * @date: 1/18/17
 * @author: Felipe Cabrera
 *
 * Copyright © 2017 Data2. All rights reserved.
 */

#include "Process.h"
#include "PageTable.h"

Process::Process::Process(std::string str)
: name(str), pid(0), state(Waiting) {
	table = new Memory::PageTable;
}

Process::Process::~Process() {
	delete [] table;
}

int64_t Process::Process::getPid() const {
	return pid;
}

void Process::Process::setPid(int64_t new_pid) {
	pid = new_pid;
}

std::string Process::Process::getName() const {
	return name;
}
