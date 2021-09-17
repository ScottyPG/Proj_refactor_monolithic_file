#ifndef FILEIO_H_
#define FILEIO_H_

#include "constants.h"

namespace SPG{

    int load(const std::string filename, std::vector<consts::process> &myProcesses);

    int save(const std::string filename, std::vector<consts::process> &myProcesses);
}

#endif