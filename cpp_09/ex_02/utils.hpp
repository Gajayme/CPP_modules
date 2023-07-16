#ifndef UTILS_HPP
# define UTILS_HPP

#include <iostream>
#include <string>
#include <vector>
#include <deque>

namespace utils {

void exitWithError(const std::string &errorMsg);

bool isValidString(const std::string &str);

template <typename T>
void printData(const T &data) {
	std::cout << "-----" << std::endl;
	for (size_t i = 0; i < data.size(); ++i) {
		std::cout << data[i] << " ";
 	}
	std::cout << std::endl;
	std::cout << "-----" << std::endl;
}

} // namespace  utils

#endif
