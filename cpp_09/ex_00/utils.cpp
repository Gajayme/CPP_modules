#include "utils.hpp"

#include <iostream>
#include <algorithm>

namespace {

	const int MAX_VALID_YR = 9999;
	const char delimeter = '-';
	const double upperBorder = 1000.0;
	const double lowerBorder = 0.0;
	const std::string WHITESPACE = " \n\r\t\f\v";
}

namespace utils {

void exitWithError(const std::string &errString) {
	std::cout << errString << std::endl;
	exit(1);
}

void printParseError(const std::string &errMsg) {
		std::cout << "Error: " << errMsg << std::endl;
}

void printPrice(const std::string &date, const double amount, const double price) {
	std::cout << date << " => " << amount << " = " << price << std::endl;
}

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

bool isLeap(const size_t year) {
	return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

bool checkDayMonthYear(const size_t d, const size_t m, const size_t y) {
	if (y > MAX_VALID_YR) {
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

bool checkDate(const std::string &dateString, const std::string &minDate) {
	const size_t dateLength = 10;
	if (dateString.length() != dateLength) {
		return false;
	}

	const size_t firstDelimPos = 4;
	const size_t secondDelimPos = 7;
	const std::string allDigits = "0123456789";

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

	return checkDayMonthYear(day, month, year) && (dateString >= minDate);
}

bool checkPrice(const std::string &priceString) {
	const std::string allDigits = "-+.0123456789";
	for (size_t i = 0; i < priceString.length(); ++i) {
		if (allDigits.find(priceString[i]) == std::string::npos) {
			return false;
		}
	}
	return true;
}

bool checkLowerBorder(const double value) {
	return value >= lowerBorder;
}

bool checkUpperBorder(const double value) {
	return value <= upperBorder;
}

} // utils
