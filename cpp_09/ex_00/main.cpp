#include "utils.hpp"
#include "BitcoinExchange.hpp"

int main(const int argc, const char * const argv[]) {
	if (argc != 2) {
		utils::exitWithError("Invalid arguments amount");
	}

	BitcoinExchange bitcoinExchange;
	bitcoinExchange.processInput(std::string(argv[1]));
	return 0;
}
