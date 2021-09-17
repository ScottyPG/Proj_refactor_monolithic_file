#include <vector>
#include "../includes/utils.h"
#include "../includes/constants.h"

using namespace util;

namespace util{
    //sorts vector inplace based on mySortOrder (inplace means the vector is modified)
    //returns nothing
    void sort(const consts::SORT_ORDER &mySortOrder,std::vector<consts::process> &myProcesses){

    }

    //gets the next process from the vector, then removes it from the vector
    //returns removed process
    consts::process getNext(std::vector<consts::process> &myProcesses){
        consts::process p;
        return p;
    }

    //returns the number of entries in the vector
    int getSize(std::vector<consts::process> &myProcesses){
        return consts::UNIMPLEMENTED;
    }

    //attempt to correct missing data
    //if cannot correct, then drop row
    //return number of rows in myProcesses
    int handleMissingData(std::vector<consts::process> &myProcesses){
        return consts::NO_DATA_TO_WORK_ON;
    }

}