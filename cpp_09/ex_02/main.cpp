#include "utils.hpp"
#include "data_holder.hpp"
#include "p_merge_me.hpp"
#include "timer.hpp"

#include <iostream>

int main(const int argc, const char * const argv[]) {
	DataHolder &dataHolder = DataHolder::getDataHolder();
	if (!dataHolder.readData(argc,argv)) {
		utils::exitWithError("invalid data");
	}

	PmergeMe pmergeme;
	pmergeme.processData(dataHolder);
	return 0;
}
