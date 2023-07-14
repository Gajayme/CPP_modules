#ifndef RPN_HPP
# define RPN_HPP

#include <string>

class RPN {

	public :

	RPN();

	RPN(const RPN &other);

	RPN &operator =(const RPN &other);

	~RPN();

	void calculateRpn(const std::string &rpnString);

	private:

	void processRpnString(const std::string &rpnString) const;

	bool checkSymbols(const std::string &rpnString) const;

};

#endif
