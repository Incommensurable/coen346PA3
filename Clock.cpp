#include <ctime>
#include "Clock.h"

Clock::Clock() {
	time=0;
	handle =NULL;
	//instance = NULL;

}

Clock::~Clock() {
	// TODO Auto-generated destructor stub
}

int Clock::getTime(){
	return clock();
}

//thread Clock::startThread(){
//	thread t1 = thread([=] { run(); });
//	handle = t1.native_handle();
	//return t1;
//}

void Clock::run(){
	while(true){
		time=clock();
	}
}

void Clock::terminate(){
	//TerminateThread(handle,0);
}
/*
Clock* Clock::getInstance(){
	if (instance == NULL){
		instance = new Clock();
	}
	return instance;

}
*/
