#include "RPN.hpp"
#include "utils.hpp"

int main(const int argc, const char * const argv[]) {
	(void)argv;
	if (argc != 2) {
		utils::printError();
	}

	RPN rpn;

	rpn.calculateRpn(std::string(argv[1]));
	return 0;
}
