/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 22:04:11 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/28 14:26:55 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog"){

	std::cout<<COLOR_GREEN<<"Dog constructor\n"<<COLOR_DEFAULT;
	//_type = "Dog";
}

Dog::Dog(const Dog & a){

	std::cout<<COLOR_GREEN<<"Dog copy constructor\n"<<COLOR_DEFAULT;
	_type = a._type;

}

Dog & Dog::operator=(const Dog & a){

	std::cout<<COLOR_GREEN<<"Dog assignment\n"<<COLOR_DEFAULT;
	if (this != &a){
		_type = a._type;
	}
	return (*this);
}

Dog::~Dog()
{

	std::cout<<COLOR_GREEN<<"Dog destructor\n"<<COLOR_DEFAULT;
}

void Dog::makeSound() const {

	std::cout<<COLOR_GREEN<<"Bart-bark\n"<<COLOR_DEFAULT;
}

std::string Dog::getType() const {

	return (_type);
	//std::cout<<COLOR_GREEN<<"Dog _type: "<<_type<<std::endl<<COLOR_DEFAULT;
	//std::cout<<COLOR_GREEN<<"Animal _type: "<<Animal::_type<<std::endl<<COLOR_DEFAULT;
}
