#include <iostream>
#include <thread>
#include <vector>
#include "Clock.h"
#include "Process.h"


#ifndef SCHEDULER_H_
#define SCHEDULER_H_

class Scheduler {


public:
	Scheduler();
	virtual ~Scheduler();
	//thread startThread();
	void run();
	void increment();

private:
	vector<Process> processes;
	void * handle;
	int numOfProcesses;
	int terminatedProcesses;
	//vector<thread> processThread;



};

#endif /* SCHEDULER_H_ */
