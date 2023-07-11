#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <string>
#include <map>

class BitcoinExchange {
	public:

		static BitcoinExchange &getBitcoinExchange();

		~BitcoinExchange();

		void processInput(const std::string &filename);

	private:

		typedef std::map<std::string, double> Database;

		BitcoinExchange();

		BitcoinExchange(const BitcoinExchange &other);

		BitcoinExchange &operator =(const BitcoinExchange &other);

		Database dataBase_;

		void readDatabase();

		void processTaskDatabaseLine(const std::string &line);

		void processUserDatabaseLine(const std::string &line) const;

		bool validateInformation(const std::string &date, const std::string &price) const;

		void calculatePrice(const std::string &date, const double amount) const;
};

#endif
