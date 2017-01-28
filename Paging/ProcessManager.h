//
//  ProcessManager.h
//  PageTable
//
//  Created by Felipe Cabrera on 1/18/17.
//  Copyright © 2017 Data2. All rights reserved.
//

#ifndef PROCESS_MANAGER_H
#define PROCESS_MANAGER_H

#include <string>
#include "Types.h"

namespace Process {
	class Process;
	
	class Manager {
	public:
		Manager(size_t s);
		~Manager();
		void add(Process * proc);
		Process * add(std::string name);
	private:
		Process ** process_table;
		size_t size;
	};
}

#endif // PROCESS_MANAGER_H
