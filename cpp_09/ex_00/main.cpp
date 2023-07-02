#include <iostream>
#include <string>
#include <map>

#include "utils.hpp"
#include "BitcoinExchange.hpp"


int main(const int argc, const char * const argv[]) {

	if (argc != 2) {
		utils::exitWithError("Invalid arguments amount");
	}
	//todo Remove
	(void)argc;
	(void)argv;

	BitcoinExchange bExch;

	return 0;
}
