#include "BitcoinExchange.hpp"
#include "utils.hpp"

#include <iostream>
#include <fstream>



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

void BitcoinExchange::ReadDB() {
	std::ifstream inf(data);
	if (!inf) {
		utils::exitWithError("Cant open db file");
	}

	std::string line;
	while(inf) {
		inf >> line;
		const size_t delimeterIdx = line.find(',');
		const std::string datePart = line.substr(0, delimeterIdx);
		const size_t pricePart = std::stoi(line.substr(delimeterIdx + 1, line.length()));
		dataBase_.insert(std::pair<std::string, size_t>(datePart, pricePart));
	}
}
