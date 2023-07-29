#ifndef DATA_HOLDER_HPP
# define DATA_HOLDER_HPP

#include <iostream>

class DataHolder {
public:

	static DataHolder &getDataHolder();
	bool readData(const size_t len, const char * const data[]);
	const size_t *getData() const;
	size_t getSize() const ;

private:

	size_t *data_;
	size_t size_;

	DataHolder();
	~DataHolder();
	DataHolder(const DataHolder &);
	DataHolder operator =(const DataHolder &);
};

#endif
