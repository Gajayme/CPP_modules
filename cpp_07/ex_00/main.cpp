/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gajayme <gajayme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 12:33:38 by gajayme           #+#    #+#             */
/*   Updated: 2022/08/06 13:49:13 by gajayme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void){

	{
		std::cout<<COLOR_BLUE<<"=====My tests=====\n\n";

		int x = 10;
		int y = 5;

		char c = 'c';
		char v = 'v';

		std::cout<<"min: "<<min<int>(x, y)<<" "<<min(c, v)<<std::endl;
		std::cout<<"max: "<<max<int>(x, y)<<" "<<max(c, v)<<std::endl;

		std::cout<<"Before swap:\nc = "<<c<<" v = "<<v<<std::endl<<"x = "<<x<<" y = "<<y<<std::endl;
		swap(c, v);
		swap(x, y);
		std::cout<<"After swap:\nc = "<<c<<" v = "<<v<<std::endl<<"x = "<<x<<" y = "<<y<<std::endl<<COLOR_DEFAULT;
	}
	{
		std::cout<<COLOR_RED<<"\n=====Subj tests=====\n\n";
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}

	return (0);
}