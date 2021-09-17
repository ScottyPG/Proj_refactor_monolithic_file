#ifndef UTILITIES_H_
#define UTILITIES_H_

#include "constants.h"

namespace util{
    void sort(const consts::SORT_ORDER &mySortOrder,std::vector<consts::process> &myProcesses);

    consts::process getNext(std::vector<consts::process> &myProcesses);

    int getSize(std::vector<consts::process> &myProcesses);

    int handleMissingData(std::vector<consts::process> &myProcesses);
}

#endif