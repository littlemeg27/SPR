#include <iostream>
#include "MemoryTracker.h"
#include "main.h"
#include "Inventory.h"

unsigned int Inventory::m_ItemsMade = 1;

int main()
{
    ScopeMain();

    unsigned int nInUse = MemoryTracker::GetInUse();
  
    std::cout << "\nMemory In Use: " << nInUse << std::endl;

	if (nInUse == 0)
	{
		std::cout << "PASS" << std::endl;
	}
	else
	{
		std::cout << "FAIL" << std::endl;
	}

	std::cout << std::endl;
}
