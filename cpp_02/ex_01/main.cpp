/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:08:42 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/18 21:22:07 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void){

	Fixed a;
	const Fixed b( 10 );
	const Fixed c( 42.42f );
	const Fixed d( b );
	a = Fixed( 1234.4321f );
	const Fixed e( -101 );
	const Fixed f( -100.65f );

	std::cout<<"\n";
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "e is " << e << std::endl;
	std::cout << "f is " << f << std::endl;

	std::cout<<"\n";
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "e is " << e.toInt() << " as integer" << std::endl;
	std::cout << "f is " << f.toInt() << " as integer" << std::endl;

	return (0);
}
