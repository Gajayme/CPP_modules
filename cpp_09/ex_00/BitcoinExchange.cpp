#include "BitcoinExchange.hpp"
#include "utils.hpp"

#include <iostream>
#include <fstream>

namespace {

	const std::string databasePath = "data.csv";
	const char tastDatabaseDelimeter = ',';
	const char userDatabaseDelimeter = '|';

	void printParseError(const std::string &errMsg) {
		std::cout << "Error: " << errMsg << std::endl;
	}

	void printPrice(const std::string &date, const double amount, const double price) {
		std::cout << date << " => " << amount << " = " << price << std::endl;
	}

} // namespace

BitcoinExchange::BitcoinExchange() {
	readDatabase();
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

void BitcoinExchange::processInput(const std::string &filename) {
	std::ifstream inf(filename);
	if (!inf) {
		utils::exitWithError("Can't open db file");
	}
	std::string line;
	std::getline(inf, line);
	while(inf) {
		std::getline(inf, line);
		processUserDatabaseLine(line);
	}
}

void BitcoinExchange::readDatabase() {
	std::ifstream inf(databasePath);
	if (!inf) {
		utils::exitWithError("Can't open database: " + databasePath);
	}

	std::string line;
	std::getline(inf, line);
	while(inf) {
		std::getline(inf, line);
		processTaskDatabaseLine(line);
	}
}

void BitcoinExchange::processTaskDatabaseLine(const std::string &line) {
	if (line.length() == 0) {
		return;
	}

	const size_t delimeterIdx = line.find(tastDatabaseDelimeter);
	const std::string datePart = utils::trim(line.substr(0, delimeterIdx));
	const double pricePart = std::stod(line.substr(delimeterIdx + 1, line.length()));
	dataBase_.insert(std::pair<std::string, double>(datePart, pricePart));
}

void BitcoinExchange::processUserDatabaseLine(const std::string &line) {
	const std::string trimmedLine = utils::trim(line);
	if (trimmedLine.length() == 0) {
			return;
	}
	const size_t delimeterIdx = trimmedLine.find(userDatabaseDelimeter);
	const std::string datePart = utils::trim(trimmedLine.substr(0, delimeterIdx));

	if (!utils::checkDate(datePart, dataBase_.begin()->first)) {
		printParseError("bad input => " + datePart );
		return;
	}

	const std::string pricePart = utils::trim(trimmedLine.substr(delimeterIdx + 1, trimmedLine.length()));
	if (!utils::checkPrice(pricePart)) {
		printParseError("not a number");
		return;
	}
	const double amount = std::stod(pricePart);

	if (!utils::checkLowerBorder(amount)){
		printParseError("not a positive number.");
		return;
	}

	if (!utils::checkUpperBorder(amount)){
		printParseError("too large a number.");
		return;
	}

	calculatePrice(datePart, amount);
}

void BitcoinExchange::calculatePrice(const std::string &date, const double amount) {
	Database::const_iterator it = dataBase_.lower_bound(date);

	while (true) {
		if ((it->first) <= date) {
			const double price = amount * (it->second);
			printPrice(date, amount, price);
			return;
		}
		--it;
	}
}
