#include "utils.hpp"
#include "BitcoinExchange.hpp"

int main(const int argc, const char * const argv[]) {
	if (argc != 2) {
		utils::exitWithError("Invalid arguments amount");
	}

	BitcoinExchange bitcoinExchange1;
	BitcoinExchange bitcoinExchange2;
	bitcoinExchange1.processInput(std::string(argv[1]));
	bitcoinExchange1.processInput(std::string("copy.txt"));


	return 0;
}
