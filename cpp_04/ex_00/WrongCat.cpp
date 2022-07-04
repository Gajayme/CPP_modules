/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 22:04:11 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/28 15:54:25 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat"){

	std::cout<<COLOR_BLUE<<"WrongCat constructor\n"<<COLOR_DEFAULT;
}

WrongCat::WrongCat(const WrongCat & a){

	std::cout<<COLOR_BLUE<<"WrongCat copy constructor\n"<<COLOR_DEFAULT;
	_type = a._type;

}

WrongCat & WrongCat::operator=(const WrongCat & a){

	std::cout<<COLOR_BLUE<<"WrongCat assignment\n"<<COLOR_DEFAULT;
	if (this != &a){
		_type = a._type;
	}
	return (*this);
}

WrongCat::~WrongCat()
{

	std::cout<<COLOR_BLUE<<"WrongCat destructor\n"<<COLOR_DEFAULT;
}

void WrongCat::makeSound() const {

	std::cout<<COLOR_BLUE<<"Mooooo...\n"<<COLOR_DEFAULT;
}

std::string WrongCat::getType() const {

	return (_type);
}
