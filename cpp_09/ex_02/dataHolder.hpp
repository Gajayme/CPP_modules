#ifndef DATAHOLDER_HPP
# define DATAHOLDER_HPP

#include <iostream>
#include <vector>
#include <deque>

class DataHolder {
public:

	typedef std::vector<size_t> Vector;
	typedef std::deque<size_t> Deque;

	static DataHolder &getDataHolder();
	bool readData(const size_t len, const char * const data[]);
	const Vector &getVecData() const;
	const Deque &getDeqData() const;

private:

	Vector vecData_;
	Deque deqData_;

	DataHolder();
	~DataHolder();
	DataHolder(const DataHolder &);
	DataHolder operator =(const DataHolder &);
};

#endif
