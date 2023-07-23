#ifndef DATA_HOLDER_HPP
# define DATA_HOLDER_HPP

#include <iostream>
#include <vector>
#include <deque>

class DataHolder {
public:

	typedef std::vector<size_t> Vector;
	typedef std::deque<size_t> Deque;

	static DataHolder &getDataHolder();
	bool readData(const size_t len, const char * const data[]);
	Vector &getVecData();
	Deque &getDeqData();

private:

	Vector vecData_;
	Deque deqData_;

	DataHolder();
	~DataHolder();
	DataHolder(const DataHolder &);
	DataHolder operator =(const DataHolder &);
};

#endif
