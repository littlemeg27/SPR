#include "main.h"
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include "Store.h"
#include "MemoryTracker.h"

void ScopeMain()
{
    //This is only for Mac XCode based project, the GCC compiler works differently than the MSoft one
    MemoryTracker::ResetMemoryForLocal();
    
	Store* s = new Store();
	s->Print();
}
