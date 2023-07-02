#ifndef UTILS_HPP
# define UTILS_HPP

#include <string>

namespace utils {

	std::string ltrim(const std::string &s);

	std::string rtrim(const std::string &s);

	std::string trim(const std::string &s);

	void exitWithError(const std::string &errString);

	bool checkDate(const std::string &dateString);

} // utils

#endif
