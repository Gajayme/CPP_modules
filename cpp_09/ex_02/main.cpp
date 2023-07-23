#include "utils.hpp"
#include "data_holder.hpp"
#include "p_merge_me.hpp"
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

	PmergeMe pmergeme;

	pmergeme.sort(dataHolder.getVecData());
	pmergeme.sort(dataHolder.getDeqData());

	return 0;
}
