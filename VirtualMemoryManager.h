
#ifndef VIRTUALMEMORYMANAGER_H_
#define VIRTUALMEMORYMANAGER_H_

class VirtualMemoryManager {
public:
	VirtualMemoryManager();
	virtual ~VirtualMemoryManager();

	void store(int variableId, int value);
	bool release(int variableId);
	int lookup(int variableId);
};

#endif /* VIRTUALMEMORYMANAGER_H_ */
