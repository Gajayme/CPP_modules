#ifndef RPN_HPP
# define RPN_HPP

#include <string>

class RPN {

	public :

	//constructor
	RPN();

	//copy constructor
	RPN(const RPN &other);

	//assignment operator
	RPN &operator =(const RPN &other);

	//destructor
	~RPN();

	void calculateRPN(const std::string &rpnString);


	private:

	bool checkSymbols(const std::string &rpnString) const;

};

#endif
