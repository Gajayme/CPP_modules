#include "data_holder.hpp"
#include "utils.hpp"

#include <string>

DataHolder::DataHolder():
data_(NULL),
size_(0) {
}

DataHolder::~DataHolder() {
	if (data_ != NULL) {
		delete[] data_;
	}
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
	size_t *tmpData = new size_t[len];

	for (size_t i = 1; i < len; ++i) {
		const std::string str(data[i]);
		if (!utils::isValidString(str)) {
			return false;
		}
		const size_t num = std::stoi(str);
		if (std::find(tmpData, tmpData + (i - 1), num) != (tmpData + i - 1)) {
			delete[] tmpData;
			return false;
		}
		tmpData[i - 1] = num;
	}
	if (data_ != NULL) {
		delete[] data_;
	}
	data_ = tmpData;
	size_ = len - 1;
	return true;
}

const size_t *DataHolder::getData() const {
	return data_;
}

size_t DataHolder::getSize() const {
	return size_;
}
