/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:46:06 by lyubov            #+#    #+#             */
/*   Updated: 2022/07/14 20:43:09 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void){

	try{
		Bureaucrat bob("bob", 120);
		Form a1("a1", 130);
		std::cout<<bob;
		std::cout<<a1;
		//a1.beSigned(bob);
		bob.signForm(a1);
		std::cout<<a1;
		std::cout<<std::endl;
	}
	catch(std::exception &e){
		std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	}
	std::cout<<std::endl;
	try{
		Bureaucrat bob("bob", 150);
		Form a1("a1", 130);
		std::cout<<bob;
		std::cout<<a1;
		//a1.beSigned(bob);
		bob.signForm(a1);
		std::cout<<a1;
	}
	catch(std::exception &e){
		std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	}
	std::cout<<std::endl;
	try{
		Bureaucrat bob("bob", 120);
		Form a1("a1", 130);
		std::cout<<bob;
		std::cout<<a1;
		//a1.beSigned(bob);
		bob.signForm(a1);
		bob.signForm(a1);
		std::cout<<a1;
		std::cout<<std::endl;
	}
	catch(std::exception &e){
		std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	}

	// try{
	// 	Form a2("a2", 160);
	// }
	// catch(std::exception &e){
	// 	std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	// }
	// try{
	// 	Form a3("a3", 0);
	// }
	// catch(std::exception &e){
	// 	std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	// }



	// try{
	// 	Bureaucrat bob("bob", 150);
	// 	std::cout<<bob;
	// 	bob.incrementGrade();
	// 	std::cout<<bob;
	// 	bob.decrementGrade();
	// 	std::cout<<bob;
	// 	bob.decrementGrade();
	// }
	// catch(std::exception & e){
	// 	std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	// }
	// try{
	// 	Bureaucrat dylan("dylan", 1);
	// 	std::cout<<dylan;
	// 	dylan.decrementGrade();
	// 	std::cout<<dylan;
	// 	dylan.incrementGrade();
	// 	std::cout<<dylan;
	// 	dylan.incrementGrade();
	// }
	// catch(std::exception & e){
	// 	std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	// }
	// try{
	// 	Bureaucrat henry("henry", 151);
	// }
	// catch(std::exception & e){
	// 	std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	// }
	// try{
	// 	Bureaucrat garry("garry", 0);
	// }
	// catch(std::exception & e){
	// 	std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	// }
	// try{
	// 	Bureaucrat franz("franz", -1);
	// }
	// catch(std::exception & e){
	// 	std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	// }

	return (0);
}
