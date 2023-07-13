#include "utils.hpp"
#include "BitcoinExchange.hpp"

int main(const int argc, const char * const argv[]) {
	if (argc != 2) {
		utils::exitWithError("Invalid arguments amount");
	}

	BitcoinExchange btc = BitcoinExchange();
	btc.processInput(argv[1]);

	return 0;
}
