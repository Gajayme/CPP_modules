/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gajayme <gajayme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:46:06 by lyubov            #+#    #+#             */
/*   Updated: 2022/08/07 12:26:04 by gajayme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void){

	{
		std::cout<<"===Contrucroes testing===\n\n";

		std::cout<<COLOR_BLUE<<"Bureucraes:\n"<<COLOR_DEFAULT;
		Bureaucrat test("test", 100);
		Bureaucrat test2(test);
		Bureaucrat test3("test3");
		test3 = test2;
		std::cout<<test<<test2<<test3;
		std::cout<<COLOR_MAGENTA<<"\nForms:\n"<<COLOR_DEFAULT;

		Form a1("a1", 10);
		Form a2(a1);
		//Form a3("a3");
		//a3 = a2;
		std::cout<<a1<<a2;
	}
	std::cout<<"\n=== End test ===\n\n";

	//case 1
	try{
		Bureaucrat bob("bob", 120);
		Form a1("a1", 130);
		std::cout<<bob;
		std::cout<<a1;
		bob.signForm(a1);
		std::cout<<a1;
	}
	catch(std::exception &e){
		std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	}
	std::cout<<std::endl;

	//case 2
	try{
		Bureaucrat bob("bob", 150);
		Form a1("a1", 130);
		std::cout<<bob;
		std::cout<<a1;
		bob.signForm(a1);
		std::cout<<a1;
	}
	catch(std::exception &e){
		std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	}
	std::cout<<std::endl;

	//case 3
	try{
		Bureaucrat bob("bob", 120);
		Form a1("a1", 130);
		std::cout<<bob;
		std::cout<<a1;
		bob.signForm(a1);
		bob.signForm(a1);
		std::cout<<a1;
		std::cout<<std::endl;
	}
	catch(std::exception &e){
		std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	}
	std::cout<<std::endl;

	//case 4
	try{
		Form a1("a1", 0);
	}
	catch (std::exception &e){
		std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	}
	std::cout<<std::endl;

	//case 5
	try{
		Form a1("a1", 151);
	}

	//case 6
	catch(std::exception &e) {
		std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	}

	return (0);
}
