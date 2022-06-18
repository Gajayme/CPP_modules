/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:10:54 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/18 13:28:04 by lyubov           ###   ########.fr       */
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


	int toInt( void ) const;
	float toFloat( void ) const;

	int getRawBits( void ) const;
	void setRawBits( int const raw );

};

std::ostream& operator <<(std::ostream &out, const Fixed &a);

#endif

