/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 21:35:11 by lyubov            #+#    #+#             */
/*   Updated: 2022/08/04 17:03:05 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

// void test(std::string str){
// 	try{
// 		std::cout<<COLOR_MAGENTA<<str<<COLOR_DEFAULT<<std::endl;
// 		Converter c1(str);
// 		std::cout<<c1<<std::endl;
// 	}
// 	catch (std::exception &e){
// 		std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
// 	}
// }

int main(int ac, char *av[]){

	if (ac != 2){
		std::cout<<COLOR_RED<<"Invalid amount of arguments\n"<<COLOR_DEFAULT;
		return (1);
	}
	try{
		Converter c1(av[1]);
		std::cout<<c1<<std::endl;
	}
	catch(std::exception &e){
		std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	}

	// std::cout<<COLOR_GREEN<<"=====Char tests=====\n\n"<<COLOR_DEFAULT;
	// test("g");
	// test("a");
	// test("j");
	// test("-");
	// test("/");
	// test(">");
	// test(" ");
	// std::cout<<std::endl;

	// std::cout<<COLOR_GREEN<<"=====Int tests=====\n\n"<<COLOR_DEFAULT;
	// test("1");
	// test("100");
	// test("97");
	// test("999");
	// test("-1");
	// test("-100");
	// test("100000000");
	// test("100000000000000000000");
	// std::cout<<std::endl;

	// std::cout<<COLOR_GREEN<<"=====Double tests=====\n\n"<<COLOR_DEFAULT;
	// test("10.25");
	// test("100.25");
	// test("97.25");
	// test("999.125");
	// test("1000000000.125");
	// test("-10.25");
	// test("-100.25");
	// test("-999.125");
	// std::cout<<std::endl;

	// std::cout<<COLOR_GREEN<<"=====Double tests=====\n\n"<<COLOR_DEFAULT;
	// test("10.25f");
	// test("97.25f");
	// test("100.25f");
	// test("999.125f");
	// test("1000000000.125f");
	// test("-10.25f");
	// test("-100.25f");
	// test("-999.125f");
	// std::cout<<std::endl;

	// std::cout<<COLOR_GREEN<<"=====Spec tests=====\n\n"<<COLOR_DEFAULT;
	// test("nan");
	// test("inf");
	// test("-inf");
	// test("nanf");
	// test("inff");
	// test("-inff");

	// std::cout<<COLOR_GREEN<<"=====Inv tests=====\n\n"<<COLOR_DEFAULT;
	// test("1000gj");
	// test("g1000");
	// test("gajayne");

	return (0);
}
