#include "p_merge_me.hpp"

namespace {

	void logResults(const size_t amount, const std::string &containerType, const size_t &time) {
		std::cout << "Time to process a range of " << amount << " elements with std::" <<containerType
		<< " : " << time << "us" << std::endl;
	}

} //namespace

PmergeMe::PmergeMe():
timer_() {
}

PmergeMe::PmergeMe(const PmergeMe &other):
timer_(other.timer_) {
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other) {
	if (this != &other) {
		timer_ = other.timer_;
	}
	return *this;
}

PmergeMe::~PmergeMe() {
}

void PmergeMe::processData(DataHolder &dataHolder) {
	size_t timeToSort = 0;
	utils::printData(dataHolder.getVecData(), "before");
	timer_.start();
	myMergeSort(dataHolder.getVecData(), 0, dataHolder.getVecData().size() - 1);
	timeToSort = timer_.getTime();
	utils::printData(dataHolder.getVecData(), "after");
	logResults(dataHolder.getVecData().size(), "vector", timeToSort);

	timer_.start();
	myMergeSort(dataHolder.getDeqData(), 0, dataHolder.getDeqData().size() - 1);
	timeToSort = timer_.getTime();
	logResults(dataHolder.getVecData().size(), "deque", timeToSort);
}
