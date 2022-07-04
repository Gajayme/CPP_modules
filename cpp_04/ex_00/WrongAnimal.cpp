/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal copy.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 21:28:24 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/28 15:51:36 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string type): _type(type){

	std::cout<<COLOR_YELLOW<<"WrongAnimal constructor\n"<<COLOR_DEFAULT;
}

WrongAnimal::WrongAnimal(const WrongAnimal & a){

	std::cout<<COLOR_YELLOW<<"WrongAnimal copy constructor\n"<<COLOR_DEFAULT;
	_type = a._type;

}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & a){

	std::cout<<COLOR_YELLOW<<"WrongAnimal assignment\n"<<COLOR_DEFAULT;
	if (this != &a){
		_type = a._type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal(){

	std::cout<<COLOR_YELLOW<<"WrongAnimal destructor\n"<<COLOR_DEFAULT;
}

void WrongAnimal::makeSound() const {

}

std::string WrongAnimal::getType() const {

	return _type;
}
