/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:10:54 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/18 19:07:56 by lyubov           ###   ########.fr       */
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
	static const int fractional_bits = 8;

public:

	Fixed();

	Fixed(const int i);
	Fixed(const float f);
	Fixed(const Fixed & a);
	Fixed & operator=(const Fixed & a);
	~Fixed();


	int toInt( void ) const;
	float toFloat( void ) const;

	int getRawBits( void ) const;
	void setRawBits(const int raw );

};

std::ostream& operator <<(std::ostream &out, const Fixed &a);

#endif

