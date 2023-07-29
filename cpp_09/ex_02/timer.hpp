#ifndef TIMER_HPP
# define TIMER_HPP

#include <iostream>
#include <ctime>
#include<chrono>

class Timer {

public:

	typedef std::__1::chrono::steady_clock::time_point TimePoint;
	typedef std::__1::chrono::microseconds Microseconds;

	Timer();
	Timer(const Timer &other);
	Timer &operator =(const Timer &other);
	~Timer();

	void start();
	double getTime() const;

private:
	TimePoint start_;
};

#endif
