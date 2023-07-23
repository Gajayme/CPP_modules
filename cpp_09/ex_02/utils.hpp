#ifndef UTILS_HPP
# define UTILS_HPP

#include <iostream>
#include <string>

namespace utils {

void exitWithError(const std::string &errorMsg);

bool isValidString(const std::string &str);

template <typename T>
T myAdvance(T iterator, const size_t steps) {
	advance(iterator, steps);
	return iterator;
}

template <typename T>
void printData(const T &data, const std::string &prefix) {
	std::cout << prefix << ": ";
	for (typename T::const_iterator it = data.cbegin(); it != data.cend(); ++it) {
		std::cout << *it << " ";
 	}
	std::cout << std::endl;
}

} // namespace  utils

#endif
