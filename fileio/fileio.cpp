#include <iostream>
#include <fstream>
#include <vector>

#include "../includes/fileio.h"
#include "../includes/constants.h"

using namespace std;

namespace KP{
    //attempt to open file 'filename' and read in all data
    //returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
    int load(const std::string filename, std::vector<process> &myProcesses){
	    return consts::UNIMPLEMENTED;
    }
    //attempt to create or open file 'filename' to write all data to
    //returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
    int save(const std::string filename, std::vector<process> &myProcesses){
	    return consts::UNIMPLEMENTED;
    }

}