/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:08:55 by lyubov            #+#    #+#             */
/*   Updated: 2022/07/07 17:13:18 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): _type(type){
	std::cout<<COLOR_MAGENTA<<"AMateria"<<COLOR_DEFAULT<<" constructor -> ";
	_is_taken = false;
}

AMateria::AMateria(const AMateria & a): _type(a.getType()), _is_taken(false){
	std::cout<<COLOR_MAGENTA<<"AMateria"<<COLOR_DEFAULT" copy constructor\n";
}

AMateria & AMateria::operator =(const AMateria & a){
	std::cout<<COLOR_MAGENTA<<"AMateria"<<COLOR_DEFAULT<<" assg operator\n";
	(void) a;
	return (*this);
}

AMateria::~AMateria(){
	std::cout<<COLOR_MAGENTA<<"AMateria"<<COLOR_DEFAULT<<" destructor\n";
}

std::string const & AMateria::getType() const{
	return (_type);
}

bool AMateria::get_is_taken(){
	return (_is_taken);
}

void AMateria::set_is_taken(bool i){

	if (i)
		_is_taken = true;
}
