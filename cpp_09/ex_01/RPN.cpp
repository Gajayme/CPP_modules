
#include "RPN.hpp"

#include <iostream>
#include <stack>

#include "utils.hpp"

namespace {

const std::string digits = "1234567890";
const std::string operators = "+-*/";
const std::string allChars = digits + operators + " " ;

int calculateOperation(int a, int b, char operation) {
	if (operation == '+') {
		return (a + b);
	} else if (operation == '-') {
		return (a - b);
	} else if (operation == '*') {
		return (a * b);
	} else {
		return (a / b);
	}
}

bool checkChar(const char &c, const std::string &string) {
	return !(string.find(c) == std::string::npos);
}

} // namespace

RPN::RPN() {
}

RPN::RPN(const RPN &other) {
	(void)other;
}

RPN &RPN::operator=(const RPN &other) {
	(void)other;
	return *this;
}

RPN::~RPN() {
}

void RPN::calculateRPN(const std::string &rpnString) {

	if (!checkSymbols(rpnString)) {
		utils::printError();
		return;
	}

	std::stack<int> operandsStack;
	std::string operandString;

	for (size_t i = 0; i != rpnString.size(); ++i) {
		if (checkChar(rpnString[i], operators)) {

			if (!operandString.empty()) {
				operandsStack.push(std::stoi(operandString));
				operandString.clear();
			}

			if (operandsStack.size() < 2) {
				utils::printError();
				return;
			}


			const int a = operandsStack.top();
			operandsStack.pop();
			const int b = operandsStack.top();
			operandsStack.pop();
			operandsStack.push(calculateOperation(b, a, rpnString[i]));

		} else if ((rpnString[i] == ' ')  && !operandString.empty()) {
			operandsStack.push(std::stoi(operandString));
			operandString.clear();
		} else if (rpnString[i] != ' ') {
			operandString += rpnString[i];
		}
	}

	if (!(operandsStack.size() == 1) || !operandString.empty()) {
		utils::printError();
		return;
	}
	std::cout << operandsStack.top() << std::endl;
}

bool RPN::checkSymbols(const std::string &rpnString) const {
	for (size_t i = 0; i != rpnString.size(); ++i) {
		if (!checkChar(rpnString[i], allChars)) {
			return false;
		}
	}
	return true;
}
