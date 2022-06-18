/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:10:54 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/18 13:28:14 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:

	int num;
	static int const fractional_bits = 8;

public:

	Fixed();								//c-r
	Fixed(Fixed const& a);					//copy c-r
	Fixed & operator=(Fixed const & a);		//as-t c-r
	~Fixed();								//d-r

	int getRawBits( void ) const;
	void setRawBits( int const raw );

};

#endif
