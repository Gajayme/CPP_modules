#include "utils.hpp"
#include "data_holder.hpp"
#include "merge_sort.hpp"
#include "timer.hpp"

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

	Timer timer;
	timer.start();

	//utils::printData(dataHolder.getVecData());
	//utils::printData(dataHolder.getDeqData());
	//myMergeSort(dataHolder.getDeqData(), 0, dataHolder.getDeqData().size() -1);
	//utils::printData(dataHolder.getVecData());
	//utils::printData(dataHolder.getDeqData());

	std::cout << timer.getTime() << std::endl;

	return 0;
}
