/*
 * @file: PageTable.h
 * @date: 1/18/17
 * @author: Felipe Cabrera
 * @brief: Two-level page table.
 * @discussion: Virtual addresses are 36-bit with an addressing
 * space of 64 GiB. 8 bits are reserved for the index at the
 * first level table. 8 bits for the index at second level
 * table. Finally, 20 bits for the offset, which means that pages
 * are 1 MiB long.
 *
 * Copyright © 2017 Data2. All rights reserved.
 */

#ifndef PAGETABLE_H
#define PAGETABLE_H

#include "Types.h"

/* @brief: All clases and functions related to memory management.
 * @discussion:
 */
namespace Memory {
	
	/* @brief: A 2-grade page table.
	 * @discussion:
	 */
	class PageTable {
		uint32_t * table1; /**< First level paging table. */
		uint64_t * table2; /**< Second level paging table. */
		uint64_t index; /**< Index of second level table currently loaded */
		
	public:
		/* @brief Constructor.
		 * @discussion Actually does nothing (yet).
		 */
		PageTable();
		
		/* @brief Destructor.
		 * @discussion Actually does nothing (yet).
		 */
		~PageTable();
		
		/* @brief Translates a virtual address to physical memory.
		 * @discussion First, we get the index for first grade table,
		 * then store and load the second grade table if necessary.
		 * @see loadTable2()
		 * @see storeTable2()
		 * @param[in] vaddr The virtual address to translate
		 * @return A 32 bit unsigned integer.
		 */
		uint64_t operator[] (uint64_t vaddr);
		
	private:
		/* @brief Load the second grade table.
		 * @discussion Actually does nothing (yet). Supossed to load
		 * the second grade table at current index value.
		 * @see storeTable2()
		 */
		void loadTable2();
		
		/* @brief Store the second grade table.
		 * @discussion Actually does nothing (yet). Supossed to store
		 * the second grade table at current index value.
		 * @see loadTable2()
		 */
		void storeTable2();
		
	};
}

#endif // PAGETABLE_H
