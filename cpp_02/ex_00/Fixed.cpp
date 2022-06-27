/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:14:12 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/20 17:11:15 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout<<"Default constructor called\n";
	num = 0;
}

Fixed::Fixed(const Fixed & a){
	std::cout<<"Copy constructor called\n";
	this->num = a.getRawBits();
}

Fixed & Fixed::operator=(const Fixed & a){
	std::cout<<"Copy assignment operator called\n";

	if (this != &a){
		this->num = a.getRawBits();
	}
	return ( *this);
}

Fixed::~Fixed(){
	std::cout<<"Destructor called\n";
}


int Fixed::getRawBits() const {
	std::cout<<"getRawBits member function called\n";
	return (num);
}

void Fixed::setRawBits (const int raw ){
	std::cout<<"setRawBits member function called\n";
	num = raw;
}
