#include "utils.hpp"
#include "data_holder.hpp"
#include "p_merge_me.hpp"
#include "timer.hpp"

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>

int main(const int argc, const char * const argv[]) {
	DataHolder &dataHolder = DataHolder::getDataHolder();
	if (!dataHolder.readData(argc,argv)) {
		utils::exitWithError("invalid data");
	}

	int nums[4] = {1, 2, 3, 4};

	std::vector<int> vec(nums, nums + 4);
	std::deque<int> deq(nums, nums + 4);
	std::list<int> lst(nums, nums + 4);
	std::cout << vec.size() << std::endl;
	std::cout << deq.size() << std::endl;
	std::cout << lst.size() << std::endl;

	PmergeMe pmergeme;
	pmergeme.processData(dataHolder);
	return 0;
}
