/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:14:12 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/20 16:51:49 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
//	std::cout<<"Default constructor called\n";
	num = 0;
}

Fixed::Fixed(int const i): num (i << fractional_bits){
//	std::cout<<"Int constructor called\n";
}

Fixed::Fixed(float const f){
	num = (f * (static_cast<float>(1 << fractional_bits)));
//	std::cout<<"Float constructor called\n";
}


Fixed::Fixed(Fixed const& a){
//	std::cout<<"Copy constructor called\n";
	this->num = a.getRawBits();
}

Fixed & Fixed::operator=(Fixed const & a){
//	std::cout<<"Copy assignment operator called\n";

	if (this != &a){
		this->num = a.getRawBits();
	}
	return ( *this);
}

Fixed::~Fixed(){
//	std::cout<<"Destructor called\n";
}

int Fixed::toInt() const {
	return (num >> fractional_bits);
}

float Fixed::toFloat() const {
	return (static_cast<float>(num) / static_cast<float>(1 << fractional_bits));
}


int Fixed::getRawBits() const {
//	std::cout<<"getRawBits member function called\n";
	return (num);
}

void Fixed::setRawBits (int const raw ){
//	std::cout<<"setRawBits member function called\n";
	num = raw;
}

std::ostream& operator <<(std::ostream &out, const Fixed &a){
	out << a.toFloat();
	return (out);
}

//The 4 arithmetic operators: +, -, *, and /.

Fixed operator +(const Fixed &a, const Fixed &b){
	return (Fixed(a.toFloat() + b.toFloat()));
}

Fixed operator -(const Fixed &a, const Fixed &b){
	return (Fixed(a.toFloat() - b.toFloat()));
}

Fixed operator *(const Fixed &a, const Fixed &b){
	return (Fixed(a.toFloat() * b.toFloat()));
}

Fixed operator /(const Fixed &a, const Fixed &b){
	return (Fixed(a.toFloat() / b.toFloat()));
}

//The 6 comparison operators: >, <, >=, <=, == and !=

bool operator >(const Fixed &a, const Fixed &b){
	return(a.toFloat() > b.toFloat());
}

bool operator >=(const Fixed &a, const Fixed &b){
	return(a.toFloat() >= b.toFloat());
}

bool operator <(const Fixed &a, const Fixed &b){
	return(a.toFloat() < b.toFloat());
}

bool operator <=(const Fixed &a, const Fixed &b){
	return(a.toFloat() <= b.toFloat());
}

bool operator ==(const Fixed &a, const Fixed &b){
	return(a.toFloat() == b.toFloat());
}

bool operator !=(const Fixed &a, const Fixed &b){
	return !(a == b);
}

//The 4 increment/decrement

Fixed & Fixed::operator ++(){

	++num;
	return (*this);
}

Fixed & Fixed::operator --(){

	--num;
	return (*this);
}

Fixed Fixed::operator ++(int){

	Fixed tmp(this->toFloat());
	++(*this);
	return (tmp);
}

Fixed Fixed::operator --(int){

	Fixed tmp(this->toFloat());
	--(*this);
	return (tmp);
}

//min max const mint const max
Fixed & Fixed::min(Fixed &a, Fixed &b){

	return (a > b ? b : a);
}

const Fixed & Fixed::min(const Fixed &a, const Fixed &b){

	return (a > b ? b : a);
}

Fixed & Fixed::max(Fixed &a, Fixed &b){

	return (a > b ? a : b);
}

const Fixed & Fixed::max(const Fixed &a, const Fixed  &b){

	return (a > b ? a : b);
}
