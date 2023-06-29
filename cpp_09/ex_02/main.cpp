#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <algorithm>

typedef std::vector<size_t> Vector;
typedef std::deque<size_t> Deque;

template <typename T>
bool readData(T &containerToFill, const size_t dataLength, const char * const data[]) {
 	const std::string avalibleData = "0123456789";
	for (size_t i = 1; i < dataLength; ++i) {
		const std::string str(data[i]);
		if (str.find_first_not_of(avalibleData) != std::string::npos) {
			return false;
		}
		size_t num = std::stoi(str);
		if (std::find(containerToFill.begin(), containerToFill.end(), num) != containerToFill.end()) {
			return false;
		}
		containerToFill.push_back(num);
	}
	return true;
}

void exitWithError() {
	std::cout << "Error" << std::endl;
	exit(1);
}

int main(const int argc, const char * const argv[]) {

	if (argc < 2) {
		exitWithError();
	}

	Vector vec;
	if (!readData(vec, argc, argv)) {
		exitWithError();
	}

	return 0;
}
