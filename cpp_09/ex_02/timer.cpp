#include "timer.hpp"

#include <unistd.h>

Timer::Timer():
start_(){
}

Timer::Timer(const Timer &other):
start_() {
	(void)other;
}

Timer &Timer::operator =(const Timer &other) {
	if (this == &other) {
		return *this;
	}
	this->start_ = other.start_;
	return *this;
}

Timer::~Timer() {
}

void Timer::start() {
	start_ = std::chrono::high_resolution_clock::now();
}

double Timer::getTime() const {
	const TimePoint now = std::chrono::high_resolution_clock::now();
	const Microseconds result = std::chrono::duration_cast<std::chrono::microseconds>(now - start_);
	return (static_cast<double>(result.count()));
}

bool Timer::checkTimer() {
	start();
	sleep(1);
	const double res = getTime();
	const double expectedResult = 1000000;
	const double epsilon = expectedResult * 0.1;
	return (std::abs(res - expectedResult) < epsilon);
}
