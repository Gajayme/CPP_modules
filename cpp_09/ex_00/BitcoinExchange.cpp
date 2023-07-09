#include "BitcoinExchange.hpp"
#include "utils.hpp"

#include <iostream>
#include <fstream>

namespace {

	const char taskDbDelimeter = ',';
	const char userBdDelimeter = '|';
	const std::string lastString = "\n";

	void printParseError(const std::string errMsg) {
		std::cout << "Error: " << errMsg << std::endl;
	}

} // namespace

BitcoinExchange::BitcoinExchange() {
	readDB();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other):
dataBase_(other.dataBase_) {
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) {
	if (this != &other) {
		this->dataBase_ = other.dataBase_;
	}
	return *this;
}

BitcoinExchange::~BitcoinExchange() {
}

void BitcoinExchange::processInput(const BitcoinExchange::Filename &filename) {
	std::ifstream inf(filename);
	if (!inf) {
		utils::exitWithError("Can't open db file");
	}
	std::string line;
	//read header
	std::getline(inf, line);
	while(inf && (line.length() != 0)) {
		std::getline(inf, line);
		processLine(line);
	}
}

void BitcoinExchange::readDB() {
	std::ifstream inf(data);
	if (!inf) {
		printParseError("could not open file.");
	}

	std::string line;
	// read header
	std::getline(inf, line);
	while(inf) {

		std::getline(inf, line);
		utils::trim(line);
		if (line.length() == 0) {
			return;
		}
		const size_t delimeterIdx = line.find(taskDbDelimeter);
		const std::string datePart = utils::trim(line.substr(0, delimeterIdx));
		const double pricePart = std::stod(line.substr(delimeterIdx + 1, line.length()));
		dataBase_.insert(std::pair<std::string, double>(datePart, pricePart));
	}
}

void BitcoinExchange::processLine(const std::string &line) {
	const std::string trimmedLine = utils::trim(line);
	if (trimmedLine.length() == 0) {
			return;
	}

	const size_t delimeterIdx = trimmedLine.find(userBdDelimeter);
	const std::string datePart = utils::trim(trimmedLine.substr(0, delimeterIdx));

	if (!utils::checkDate(datePart)) {
		printParseError("bad input => " + datePart );
		return;
	}

	const double amount = std::stod(trimmedLine.substr(delimeterIdx + 1, trimmedLine.length()));

	if (!utils::checkLowerBorder(amount)){
		printParseError("not a positive number.");
		return;
	}

	if (!utils::checkUpperBorder(amount)){
		printParseError("too large a number.");
		return;
	}
}
