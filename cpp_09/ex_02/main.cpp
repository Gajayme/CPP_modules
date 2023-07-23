#include "utils.hpp"
#include "data_holder.hpp"
#include "merge_sort.hpp"

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


	myMergeSort(dataHolder.getVecData(), 0, dataHolder.getVecData().size());
	myMergeSort(dataHolder.getDeqData(), 0, dataHolder.getDeqData().size());

	utils::printData(dataHolder.getVecData());
	utils::printData(dataHolder.getDeqData());

	return 0;
}
