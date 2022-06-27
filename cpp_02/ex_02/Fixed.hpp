/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:10:54 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/20 16:52:28 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:

	int num;
	static const int fractional_bits = 8;

public:

	Fixed();
	Fixed(const int i);
	Fixed(const float f);
	Fixed(const Fixed & a);
	Fixed & operator=(const Fixed & a);
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
	static const Fixed & min(const Fixed &a, const Fixed &b);

	static Fixed & max(Fixed &a, Fixed &b);
	static const Fixed & max(const Fixed &a, const Fixed &b);
};

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

