#ifndef P_MERGE_ME_HPP
# define P_MERGE_ME_HPP

#include "timer.hpp"
#include "utils.hpp"
#include "data_holder.hpp"

#include <iostream>

class PmergeMe {
public:
	PmergeMe();
	PmergeMe(const PmergeMe &other);
	PmergeMe &operator =(const PmergeMe &other);
	~PmergeMe();

	void processData(DataHolder &dataHolder);

private:

	Timer timer_;

	template <typename T>
	void myMerge(T &container, int left, int mid, int right);

	template <typename T>
	void myMergeSort(T &container, size_t left, size_t right);

};

template <typename T>
void PmergeMe::myMerge(T &container, int left, int mid, int right) {

	T leftPart(utils::myAdvance(container.begin(), left), utils::myAdvance(container.begin(), mid + 1));
	T rightPart(utils::myAdvance(container.begin(), mid + 1), utils::myAdvance(container.begin(), right + 1));

	typename T::iterator itLeft = leftPart.begin();
	typename T::iterator itRight = rightPart.begin();

	typename T::iterator itStart = utils::myAdvance(container.begin(), left);
	typename T::iterator itEnd = utils::myAdvance(container.begin(), right + 1);

	for (; itStart != itEnd; ++itStart) {
		if (itLeft == leftPart.end()) {
			*itStart = *itRight;
			++itRight;
		} else if (itRight == rightPart.end()) {
			*itStart = *itLeft;
			++itLeft;
		} else if ((*itLeft) < (*itRight)) {
			*itStart = *itLeft;
			++itLeft;
		} else if ((*itLeft) >= (*itRight)) {
			*itStart = *itRight;
			++itRight;
		}
	}
}

template <typename T>
void PmergeMe::myMergeSort(T &container, size_t left, size_t right) {
	if (left >= right) {
		return;
	}
	const size_t mid = left + (right - left) / 2;
	myMergeSort(container, left, mid);
	myMergeSort(container, mid + 1, right);
	myMerge(container, left, mid, right);
}

#endif
