//============================================================================
// Name        : proj_refactor_file
// Author      : 
// Version     :
// Copyright   : Steal this code!
// Description : learn how to refactor files into a sensible directory structure
//============================================================================
#include <iostream>
#include <string>
#include <vector>
#include "../includes/constants.h"
#include "../includes/utils.h"
#include "../includes/fileio.h"

int main() {
	std::vector<consts::process> myProcesses;

	//assumme failure
	int iRet = consts::FAIL;

	//get raw data
	iRet = SPG::load(consts::SOURCE_FILE, myProcesses);
	if (iRet != consts::SUCCESS)
		return iRet;

	int orig_size = util::getSize(myProcesses);
	int new_size = util::handleMissingData(myProcesses);
	if (orig_size != new_size)
		std::cout<<"Dropped "<<(orig_size-new_size)<<" rows with missing data"<<std::endl;

	//sort the data
	util::sort(consts::SORT_ORDER::START_TIME,myProcesses);

	//how many entries in vector
	iRet = util::getSize(myProcesses);
	if (iRet < consts::EMPTY)
		return iRet;

	consts::process p = util::getNext(myProcesses);
	if (p.cpu_time == consts::UNINITIALIZED)
		return

	//save processed data
	iRet = SPG::save(consts::RESULTS_FILE, myProcesses);
	return iRet;
}
