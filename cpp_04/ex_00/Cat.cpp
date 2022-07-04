/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 22:04:11 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/28 19:24:06 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat"){

	std::cout<<COLOR_BLUE<<"Cat constructor\n"<<COLOR_DEFAULT;
}

Cat::Cat(const Cat & a){

	std::cout<<COLOR_BLUE<<"Cat copy constructor\n"<<COLOR_DEFAULT;
	_type = a._type;

}

Cat & Cat::operator=(const Cat & a){

	std::cout<<COLOR_BLUE<<"Cat assignment\n"<<COLOR_DEFAULT;
	if (this != &a){
		_type = a._type;
	}
	return (*this);
}

Cat::~Cat()
{

	std::cout<<COLOR_BLUE<<"Cat destructor\n"<<COLOR_DEFAULT;
}

void Cat::makeSound() const {

	std::cout<<COLOR_BLUE<<"Meeeew...\n"<<COLOR_DEFAULT;
}

std::string Cat::getType() const {

	return (_type);
}
