#include "data_holder.hpp"
#include "utils.hpp"

#include <string>

DataHolder::DataHolder():
vecData_(),
deqData_() {
}

DataHolder::~DataHolder() {
}

DataHolder::DataHolder(const DataHolder &){
}

DataHolder DataHolder::operator=(const DataHolder &) {
	return *this;
}

DataHolder &DataHolder::getDataHolder() {
	static DataHolder dataHolder;
	return dataHolder;
}

bool DataHolder::readData(const size_t len, const char * const data[]) {

	if (len < 2) {
		return false;
	}

	Vector tmpVec;
	Deque tmpDeq;

	for (size_t i = 1; i < len; ++i) {
		const std::string str(data[i]);
		if (!utils::isValidString(str)) {
			return false;
		}
		const size_t num = std::stoi(str);
		if (std::find(tmpVec.begin(), tmpVec.end(), num) != tmpVec.end()) {
			std::cout << "duplicates" << std::endl;
			return false;
		}
		tmpVec.push_back(num);
		tmpDeq.push_back(num);
	}
	vecData_ = tmpVec;
	deqData_ = tmpDeq;
	return true;
}

DataHolder::Vector &DataHolder::getVecData() {
	return vecData_;
}

 DataHolder::Deque &DataHolder::getDeqData() {
	return deqData_;
}
