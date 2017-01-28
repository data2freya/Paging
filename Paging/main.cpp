/*
 * @file: main.cpp
 * @date: 1/18/17
 * @author: Felipe Cabrera
 *
 * Copyright © 2017 Data2. All rights reserved.
 */

#include <iostream>
#include "Hashing.h"
#include "ProcessManager.h"
#include "Process.h"

int main() {
	Process::Manager m(0x400);
	
	while(1) {
		std::string a;
		std::cin >> a;
		Process::Process * p = m.add(a);
		std::cout << "Process '" << p->getName() << "' with pid = " << p->getPid() << std::endl;
	}
	
	return 0;
}
