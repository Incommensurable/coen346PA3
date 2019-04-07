#include <thread>
#include "Windows.h"
#include <iostream>

using namespace std;

#ifndef CLOCK_H_
#define CLOCK_H_

class Clock {

private:
	Clock();
	int time;
	void * handle; //declaration of pointer
	static Clock* instance;

public:
	~Clock();
	//thread startThread();
	static Clock* getInstance();
	int getTime();
	void run();
	void terminate();

};

#endif /* CLOCK_H_ */
