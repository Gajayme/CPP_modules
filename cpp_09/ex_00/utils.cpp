#include "utils.hpp"

#include <iostream>

namespace utils {

void exitWithError(const std::string &errString) {
	std::cout << errString << std::endl;
	exit(1);
}

} // utils
