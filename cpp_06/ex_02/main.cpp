/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 13:18:41 by lyubov            #+#    #+#             */
/*   Updated: 2022/08/05 14:06:17 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

# define COLOR_DEFAULT "\033[0m"
# define COLOR_RED "\033[31m"
# define COLOR_GREEN "\033[32m"
# define COLOR_BLUE "\033[34m"
# define COLOR_MAGENTA "\033[35m"
# define COLOR_YELLOW "\033[33m"

//===Classes===

class Base{

public:
	virtual ~Base(){

	};
};

class A:public Base{

};

class B:public Base{

};

class C:public Base{

};

//===Functions===

Base * generate(void){

	int num = rand() % 3;

	switch (num){

	case 0:
		std::cout<<COLOR_RED<<"Create A"<<std::endl<<COLOR_DEFAULT;
		return (new A);
	case 1:
		std::cout<<COLOR_BLUE<<"Create B"<<std::endl<<COLOR_DEFAULT;
		return (new B);
	case 2:
		std::cout<<COLOR_YELLOW<<"Create C"<<std::endl<<COLOR_DEFAULT;
		return (new C);
	}
	return (new A);
}

void identify(Base* p){

	if (dynamic_cast<A*>(p)){
		std::cout<<COLOR_RED<<"Origin is A\n"<<COLOR_DEFAULT;
		return;
	}

	if (dynamic_cast<B*>(p)){
		std::cout<<COLOR_BLUE<<"Origin is B\n"<<COLOR_DEFAULT;
		return;
	}
	if (dynamic_cast<C *>(p)){
		std::cout<<COLOR_YELLOW<<"Origin is C\n"<<COLOR_DEFAULT;
		return;
	}

}

int main(void){

	srand(static_cast<unsigned int>(time(0)));

	Base *ptr = generate();
	identify (ptr);

	return (0);
}
