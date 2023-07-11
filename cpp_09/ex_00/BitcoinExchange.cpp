#include "BitcoinExchange.hpp"
#include "utils.hpp"

#include <iostream>
#include <fstream>

namespace {

	const std::string databasePath = "data.csv";
	const char tastDatabaseDelimeter = ',';
	const char userDatabaseDelimeter = '|';

} // namespace

BitcoinExchange::BitcoinExchange() {
	std::cout << " constructor called" << std::endl;
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


BitcoinExchange &BitcoinExchange::getBitcoinExchange(){
	static BitcoinExchange bitcoinExchange;
	return bitcoinExchange;
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
	const std::string pricePart = line.substr(delimeterIdx + 1, line.length());

	if (!validateInformation(datePart, pricePart)) {
		utils::exitWithError("Error in DB");
	}

	const double price = std::stod(pricePart);
	dataBase_.insert(std::pair<std::string, double>(datePart, price));
}

void BitcoinExchange::processUserDatabaseLine(const std::string &line) const{
	const std::string trimmedLine = utils::trim(line);
	if (trimmedLine.length() == 0) {
			return;
	}
	const size_t delimeterIdx = trimmedLine.find(userDatabaseDelimeter);
	const std::string datePart = utils::trim(trimmedLine.substr(0, delimeterIdx));
	const std::string pricePart = utils::trim(trimmedLine.substr(delimeterIdx + 1, trimmedLine.length()));

	if (!validateInformation (datePart, pricePart)) {
		return;
	}
	const double amount = std::stod(pricePart);

	if (!utils::checkLowerBorder(amount)){
		utils::printParseError("not a positive number.");
		return;
	}

	if (!utils::checkUpperBorder(amount)){
		utils::printParseError("too large a number.");
		return;
	}

	calculatePrice(datePart, amount);
}

bool BitcoinExchange::validateInformation(const std::string &date, const std::string &price) const {
	if (!utils::checkDate(date, dataBase_.begin()->first)) {
		utils::printParseError("bad input => " + date );
		return false;
	}

	if (!utils::checkPrice(price)) {
		utils::printParseError("not a number");
		return false;
	}
	return true;
}

void BitcoinExchange::calculatePrice(const std::string &date, const double amount) const {
	Database::const_iterator it = dataBase_.lower_bound(date);

	while (true) {
		if ((it->first) <= date) {
			const double price = amount * (it->second);
			utils::printPrice(date, amount, price);
			return;
		}
		--it;
	}
}
