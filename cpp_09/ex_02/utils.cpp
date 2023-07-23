#include "utils.hpp"

#include <iostream>

namespace utils {

void exitWithError(const std::string &errorMsg) {
	std::cout << "Error: " << errorMsg << std::endl;
	exit(1);
}

bool isValidString(const std::string &str) {
	const std::string avalibleData = "0123456789";
	return str.find_first_not_of(avalibleData) == std::string::npos;
}



} //namespace utils
