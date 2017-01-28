/* 
 * @file: Process.h
 * @date: 1/18/17
 * @author: Felipe Cabrera
 * @brief:
 * @discussion:
 *
 * Copyright © 2017 Data2. All rights reserved.
 */

#ifndef PROCESS_H
#define PROCESS_H

#include <string>
#include "Types.h"

namespace Memory {
	class PageTable;
}

/* @brief:
 * @discussion:
 */
namespace Process {
	
	/* @brief:
	 * @discussion:
	 */
	class Process {
	public:
		enum State {
			Sleeping,
			Waiting,
			Running
		};
		Process(std::string str);
		~Process();
		int64_t getPid() const;
		void setPid(int64_t new_pid);
		std::string getName() const;
	private:
		Memory::PageTable * table;
		std::string name;
		int64_t pid;
		State state;
	};
}

#endif // PROCESS_H
