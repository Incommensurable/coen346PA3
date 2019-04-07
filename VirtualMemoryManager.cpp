
#include "VirtualMemoryManager.h"

VirtualMemoryManager::VirtualMemoryManager() {
	// TODO Auto-generated constructor stub

}

VirtualMemoryManager::~VirtualMemoryManager() {
	// TODO Auto-generated destructor stub
}

//This instruction stores the given variable id and its value in the first unassigned spot in the memory.
void VirtualMemoryManager::store(int variableId, int value){

}

//This instruction removes the variable id and its value from the memory so the page which was holding
//this variable becomes available for further storage
bool VirtualMemoryManager::release(int variableId){

}


//This instruction checks if the given variableId is stored in the memory and returns back its value or -1 if it doesn't exist
//
int VirtualMemoryManager::lookup(int variableId){

}
