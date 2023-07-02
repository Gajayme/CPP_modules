#ifndef DATA_HPP
# define DATA_HPP

#include <string>

	class Data {

		public:
			explicit Data(const std::string stringData);
			Data(const Data &other);
			Data &operator =(const Data &other);
			~Data();

		private:
			bool check(std::string stringData);

	};

#endif
