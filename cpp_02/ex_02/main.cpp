/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:08:42 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/17 22:41:56 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void){

	Fixed a(0);
	Fixed b(0.5f);

	//Fixed b(5.125f);
	//Fixed c(5.125f);

	//std::cout<<++a<<std::endl;
	//std::cout<<--a<<std::endl;

	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b-- << std::endl;
	std::cout << b << std::endl;

	// Fixed c = a + b;
	// std::cout<<"c = "<<c<<std::endl;

	// Fixed d = a - b;
	// std::cout<<"d = "<<d<<std::endl;

	// Fixed e = a * b;
	// std::cout<<"e = "<<e<<std::endl;

	// Fixed f = a / b;
	// std::cout<<"f = "<<f<<std::endl;

	//std::cout<<"True "<<(c == b)<<std::endl;
	//std::cout<<"False "<<(b = a)<<std::endl;
	//std::cout<<"False "<<(b <= a)<<std::endl;
	//std::cout<<"True "<<(c != b)<<std::endl;

	return (0);
}
