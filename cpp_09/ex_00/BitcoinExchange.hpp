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

		void ReadDB();

		std::map<std::string, size_t> dataBase_;

};

#endif
