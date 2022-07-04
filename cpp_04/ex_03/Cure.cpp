/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:43:50 by lyubov            #+#    #+#             */
/*   Updated: 2022/07/04 15:40:52 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure"){

	std::cout<<"Cure constructor\n";
}

Cure::Cure(const Cure & a): AMateria(a){

	std::cout<<"Cure copy constructor\n";
}

Cure & Cure::operator =(const Cure & a){

	std::cout<<"Cure assignment operator\n";
	if (this != &a){
		AMateria::operator=(a);
	}
	return (*this);
}

Cure::~Cure(){

	std::cout<<"Cure destructor\n";
}

Cure* Cure::clone() const {
	std::cout<<"Cure clone method\n";
	return (new Cure(*this));
}

void Cure::use(ICharacter& target){

	std::cout<<COLOR_GREEN<<"Heals "<<target.getName()<<"’s wounds "<<std::endl<<COLOR_DEFAULT;
}
