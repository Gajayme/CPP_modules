#include "utils.hpp"
#include "dataHolder.hpp"

#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <algorithm>


int main(const int argc, const char * const argv[]) {

	DataHolder &dataHolder = DataHolder::getDataHolder();

	if (!dataHolder.readData(argc,argv)) {
		utils::exitWithError("invalid data");
	}

	utils::printData(dataHolder.getVecData());
	utils::printData(dataHolder.getDeqData());

	return 0;
}
