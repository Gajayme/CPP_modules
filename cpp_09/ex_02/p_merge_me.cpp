#include "p_merge_me.hpp"

#include <vector>
#include <deque>

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

	const size_t size = dataHolder.getSize();

	std::vector<size_t> vectorData(dataHolder.getData(), dataHolder.getData() + size);
	std::deque<size_t> dequeData(dataHolder.getData(), dataHolder.getData() + size);

	utils::printData(vectorData, "before");
	timer_.start();
	myMergeSort(vectorData, 0, size - 1);
	const double timeToSortVec = timer_.getTime();
	utils::printData(vectorData, "after");
	logResults(size, "vector", timeToSortVec);

	timer_.start();
	myMergeSort(dequeData, 0, size - 1);
	logResults(size, "deque", timer_.getTime());
}
