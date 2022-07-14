/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:46:06 by lyubov            #+#    #+#             */
/*   Updated: 2022/07/14 18:41:33 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void){

	try{
		Bureaucrat bob("bob", 150);
		std::cout<<bob;
		bob.incrementGrade();
		std::cout<<bob;
		bob.decrementGrade();
		std::cout<<bob;
		bob.decrementGrade();
	}
	catch(std::exception & e){
		std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	}
	try{
		Bureaucrat dylan("dylan", 1);
		std::cout<<dylan;
		dylan.decrementGrade();
		std::cout<<dylan;
		dylan.incrementGrade();
		std::cout<<dylan;
		dylan.incrementGrade();
	}
	catch(std::exception & e){
		std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	}
	try{
		Bureaucrat henry("henry", 151);
	}
	catch(std::exception & e){
		std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	}
	try{
		Bureaucrat garry("garry", 0);
	}
	catch(std::exception & e){
		std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	}
	try{
		Bureaucrat franz("franz", -1);
	}
	catch(std::exception & e){
		std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	}

	return (0);
}
