/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 09:39:25 by lyubov            #+#    #+#             */
/*   Updated: 2022/07/07 17:14:37 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {

	std::cout<<COLOR_BLUE<<"Ice"<<COLOR_DEFAULT<<" constructor\n";
}

Ice::Ice(const Ice & a): AMateria(a) {

	std::cout<<COLOR_BLUE<<"Ice"<<COLOR_DEFAULT<<" copy constructor\n";
}

Ice & Ice::operator =(const Ice & a) {

	std::cout<<COLOR_BLUE<<"Ice"<<COLOR_DEFAULT<<" copy constructor\n";
	if (this != &a){
		AMateria::operator=(a);
	}
	return (*this);
}

Ice::~Ice(){

	std::cout<<COLOR_BLUE<<"Ice"<<COLOR_DEFAULT<<" destructor -> ";
}

Ice* Ice::clone() const {
	std::cout<<COLOR_BLUE<<"Ice"<<COLOR_DEFAULT<<" clone method\n";
	return (new Ice(*this));
}

void Ice::use(ICharacter& target){

	std::cout<<COLOR_BLUE<<"Shoots an ice bolt at "<<target.getName()<<std::endl<<COLOR_DEFAULT;
}
