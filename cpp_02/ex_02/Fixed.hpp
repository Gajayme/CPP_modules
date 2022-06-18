/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:10:54 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/18 14:20:36 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
// do i need this???
#include <cmath>

class Fixed
{
private:

	int num;
	static int const fractional_bits = 8;

public:

	Fixed();
	Fixed(int const i);
	Fixed(float const f);
	Fixed(Fixed const& a);
	Fixed & operator=(Fixed const & a);
	~Fixed();

	int		toInt( void ) const;
	float	toFloat( void ) const;
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	Fixed & operator ++();
	Fixed & operator --();
	Fixed operator ++(int);
	Fixed operator --(int);

	static Fixed & min(Fixed &a, Fixed &b);
	static const Fixed & min(Fixed const &a, Fixed const &b);

	static Fixed & max(Fixed &a, Fixed &b);
	static const Fixed & max(Fixed const &a, Fixed const &b);
};

//overloads

std::ostream& operator <<(std::ostream &out, const Fixed &a);

//The 4 arithmetic operators: +, -, *, and /.
Fixed operator +(const Fixed &a, const Fixed &b);
Fixed operator -(const Fixed &a, const Fixed &b);
Fixed operator *(const Fixed &a, const Fixed &b);
Fixed operator /(const Fixed &a, const Fixed &b);

//The 6 comparison operators: >, <, >=, <=, == and !=
bool operator >(const Fixed &a, const Fixed &b);
bool operator >=(const Fixed &a, const Fixed &b);
bool operator <(const Fixed &a, const Fixed &b);
bool operator <=(const Fixed &a, const Fixed &b);
bool operator ==(const Fixed &a, const Fixed &b);
bool operator !=(const Fixed &a, const Fixed &b);


#endif

