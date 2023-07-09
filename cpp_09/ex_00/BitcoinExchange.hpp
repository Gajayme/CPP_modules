#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <string>
#include <map>

namespace {

	static const std::string data = "data.csv";

} // namespace


class BitcoinExchange {
	public:

		typedef std::string Filename;

		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator =(const BitcoinExchange &other);
		~BitcoinExchange();

		void processInput(const Filename &filename);

	private:

		void readDB();

		void processLine(const std::string &line);

		std::map<std::string, double> dataBase_;

};

#endif
