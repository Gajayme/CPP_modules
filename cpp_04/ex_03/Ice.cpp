/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 09:39:25 by lyubov            #+#    #+#             */
/*   Updated: 2022/07/04 15:41:05 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {

	std::cout<<"Ice constructor\n";
}

Ice::Ice(const Ice & a): AMateria(a) {

	std::cout<<"Ice copy constructor\n";
}

Ice & Ice::operator =(const Ice & a) {

	std::cout<<"Ice copy constructor\n";
	if (this != &a){
		AMateria::operator=(a);
	}
	return (*this);
}

Ice::~Ice(){

	std::cout<<"Ice destructor\n";
}

Ice* Ice::clone() const {
	std::cout<<"Ice clone method\n";
	return (new Ice(*this));
}

void Ice::use(ICharacter& target){

	std::cout<<COLOR_BLUE<<"Shoots an ice bolt at "<<target.getName()<<std::endl<<COLOR_DEFAULT;
}
