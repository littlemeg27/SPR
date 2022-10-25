#pragma once

class MemoryTracker
{
    static unsigned int m_InUse;
public:
	static void AddUse(unsigned int _amount);
	static void RemoveUse(unsigned int _amount);
	static unsigned int GetInUse();
    //THIS METHOD SHOULD ONLY BE NEEDED FOR MAC COMPILERS
    //Due to modifying this from a Windows based project, this part needs to be used at the start of ScopeMain.
    static void ResetMemoryForLocal();
};
