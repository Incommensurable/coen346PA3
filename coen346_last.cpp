//============================================================================
// Name        : coen346_3.cpp
// Author      :
// Version     :
// Copyright   :
// Description :
//============================================================================

#include <iostream>
#include <thread>
#include "Windows.h"
#include "Clock.h"
#include <fstream>
#include <string>

using namespace std;


int main() {

	int numOfProcesses;
	int sizeOfMainMemory; //indicates number of pages in main memory
	string stringToStore;
	string stringMemFile;
//---------------------------------------------------------------------
	ifstream inFile;
	inFile.open("G:\\processes.txt");
if(inFile.is_open()){
	//while(inFile.good()){
		if(inFile>>stringToStore){
	//getline(inFile,stringToStore);
	//cout<<stringToStore<<endl;
//	}
	}
}else{
	cerr<<"Unable to open file processes.txt";
	exit(1); //call system to stop
}
inFile.close();
numOfProcesses = atoi(stringToStore.c_str());
//numOfProcesses = stoi(stringToStore);
cout<<numOfProcesses<<endl;
//-----------------------------------------------------------------------

ifstream memFile;
memFile.open("G:\\memconfig.txt");
if(memFile.is_open()){
	if(memFile>>stringMemFile){
}
}else{
cerr<<"Unable to open file memconfig.txt";
exit(1); //call system to stop
}
memFile.close();
sizeOfMainMemory = atoi(stringMemFile.c_str());
//sizeOfMainMemory = stoi(stringMemFile);
cout<<sizeOfMainMemory<<endl;
//-----------------------------------------------------------------------

	//thread t1;
	//thread clk  = Clock::getInstance() ->startThread();



	//join the threads to main
	//clk.join;

	return 0;
}
