/*
 * @file: ProcessManager.cpp
 * @date: 1/18/17
 * @author: Felipe Cabrera
 *
 * Copyright © 2017 Data2. All rights reserved.
 */

#include "ProcessManager.h"
#include "Process.h"
#include "Hashing.h"

Process::Manager::Manager(size_t s)
	: size(s) {
	process_table = new Process*[size];
}

Process::Manager::~Manager() {
	delete[] process_table;
}

void Process::Manager::add(Process::Process * proc) {
	uint32_t pid = Hashing::hash32(proc->getName()) % size;
	process_table[pid] = proc;
	proc->setPid(pid);
}

Process::Process * Process::Manager::add(std::string name) {
	uint32_t pid = Hashing::hash32(name) % size;
	Process * proc = new Process(name);
	proc->setPid(pid);
	process_table[pid] = proc;
	return proc;
}
