#include "BitcoinExchange.hpp"
#include "utils.hpp"

#include <iostream>
#include <fstream>

namespace {

	const char taskDbDelimetr = ',';
	const char userBdDelimetr = '|';

} // namespace

BitcoinExchange::BitcoinExchange() {
	ReadDB();
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
		utils::exitWithError("Cant open db file");
	}
	std::string line;
	std::getline(inf, line);
	while(inf && (line.length() != 0)) {
		std::getline(inf, line);

		//вынести проверку в отдельную функцию
		const size_t delimeterIdx = line.find(userBdDelimetr);
		const std::string datePart = utils::trim(line.substr(0, delimeterIdx));
		if (utils::checkDate(datePart)) {
			std::cout << line << " valid" << std::endl;
		} else {
			std::cout << line << " invalid" << std::endl;
		}
		//check date
	}
}

void BitcoinExchange::ReadDB() {
	std::ifstream inf(data);
	if (!inf) {
		utils::exitWithError("Cant open db file");
	}

	std::string line;
	std::getline(inf, line);
	while(inf) {
		std::getline(inf, line);
		const size_t delimeterIdx = line.find(taskDbDelimetr);
		if (delimeterIdx >= line.length()) {
			continue;
		}
		const std::string datePart = utils::trim(line.substr(0, delimeterIdx));
		const size_t pricePart = std::stoi(line.substr(delimeterIdx + 1, line.length()));
		dataBase_.insert(std::pair<std::string, size_t>(datePart, pricePart));
	}
}
