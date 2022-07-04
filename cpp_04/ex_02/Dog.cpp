/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 22:04:11 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/29 14:20:13 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog"){

	std::cout<<COLOR_GREEN<<"Dog constructor\n"<<COLOR_DEFAULT;
	brain = new Brain("Dog's idea: ");
}

Dog::Dog(const Dog & a){

	std::cout<<COLOR_GREEN<<"Dog copy constructor\n"<<COLOR_DEFAULT;
	_type = a._type;
	brain = new Brain(*a.brain);
}

Dog & Dog::operator=(const Dog & a){

	std::cout<<COLOR_GREEN<<"Dog assignment\n"<<COLOR_DEFAULT;
	if (this != &a){
		_type = a._type;
		*brain = *a.brain;
	}
	return (*this);
}

Dog::~Dog(){

	std::cout<<COLOR_GREEN<<"Dog destructor\n"<<COLOR_DEFAULT;
	delete brain;
}

void Dog::makeSound() const {

	std::cout<<COLOR_GREEN<<"Bart-bark\n"<<COLOR_DEFAULT;
}

std::string Dog::getType() const {

	return (_type);
}

std::string Dog::get_idea(unsigned int num) const{

	return (brain->get_idea(num));
};
