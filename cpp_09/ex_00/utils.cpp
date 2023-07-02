#include "utils.hpp"

#include <iostream>
#include <algorithm>

namespace utils {

const int MAX_VALID_YR = 9999;
//TODO эту дану наверное стоит взять из базы данных
const int MIN_VALID_YR = 2009;
const char delimeter = '-';

const std::string WHITESPACE = " \n\r\t\f\v";

std::string ltrim(const std::string &s) {
	size_t start = s.find_first_not_of(WHITESPACE);
	return (start == std::string::npos) ? "" : s.substr(start);
}

std::string rtrim(const std::string &s) {
	size_t end = s.find_last_not_of(WHITESPACE);
	return (end == std::string::npos) ? "" : s.substr(0, end + 1);
}

std::string trim(const std::string &s) {
	return rtrim(ltrim(s));
}

void exitWithError(const std::string &errString) {
	std::cout << errString << std::endl;
	exit(1);
}

bool isLeap(const size_t year) {
	return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

bool checkDayMonthYear(const size_t d, const size_t m, const size_t y) {
	if ((y > MAX_VALID_YR) || (y < MIN_VALID_YR)) {
		return false;
	} else if ((m < 1) || (m > 12)) {
		return false;
	} else if ((d < 1) || (d > 31)) {
		return false;
	}

	if (m == 2) {
		if (isLeap(y)) {
			return (d <= 29);
		} else {
			return (d <= 28);
		}
	}

	if ((m == 4) || (m == 6) || (m == 9) || (m == 11)) {
		return (d <= 30);
	}

	return true;
}


bool checkDate(const std::string &dateString) {
	const size_t dateLength = 10;
	if (dateString.length() != dateLength) {
		return false;
	}

	const std::string allDigits = "1234567890";
	const size_t firstDelimPos = 4;
	const size_t secondDelimPos = 7;

	for (size_t i = 0; i < dateLength; ++i) {
		const bool isDelim = ((i == firstDelimPos) || (i == secondDelimPos));
		if (isDelim && (dateString[i] != delimeter)) {
			return false;
		} else if (!isDelim && (allDigits.find(dateString[i]) == std::string::npos)) {
			return false;
		}
	}

	const size_t year = std::stoi(dateString.substr(0, 4));
	const size_t month = std::stoi(dateString.substr(firstDelimPos + 1, 2));
	const size_t day = std::stoi(dateString.substr(secondDelimPos + 1, 2));

	return checkDayMonthYear(day, month, year);

}

} // utils
