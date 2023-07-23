#include "p_merge_me.hpp"

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


