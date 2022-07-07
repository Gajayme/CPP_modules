/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:43:50 by lyubov            #+#    #+#             */
/*   Updated: 2022/07/07 17:14:17 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure"){

	std::cout<<COLOR_GREEN<<"Cure"<<COLOR_DEFAULT<<" constructor\n";
}

Cure::Cure(const Cure & a): AMateria(a){

	std::cout<<COLOR_GREEN<<"Cure"<<COLOR_DEFAULT<<" copy constructor\n";
}

Cure & Cure::operator =(const Cure & a){

	std::cout<<COLOR_GREEN<<"Cure"<<COLOR_DEFAULT<<" assignment operator\n";
	if (this != &a){
		AMateria::operator=(a);
	}
	return (*this);
}

Cure::~Cure(){

	std::cout<<COLOR_GREEN<<"Cure"<<COLOR_DEFAULT<<" destructor -> ";
}

Cure* Cure::clone() const {
	std::cout<<COLOR_GREEN<<"Cure"<<COLOR_DEFAULT<<" clone method\n";
	return (new Cure(*this));
}

void Cure::use(ICharacter& target){

	std::cout<<COLOR_GREEN<<"Heals "<<target.getName()<<"’s wounds "<<std::endl<<COLOR_DEFAULT;
}
