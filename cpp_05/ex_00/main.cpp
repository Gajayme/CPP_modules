/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gajayme <gajayme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:46:06 by lyubov            #+#    #+#             */
/*   Updated: 2022/08/05 21:34:39 by gajayme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void){
{
	std::cout<<"===Contrucroes testing===\n\n";

	Bureaucrat test("test", 100);
	Bureaucrat test2(test);
	Bureaucrat test3("test3");
	std::cout<<test3.getName()<<std::endl;
	std::cout<<test<<test2<<test3;
}
	std::cout<<"\n=== End test ===\n\n";

	try{
		Bureaucrat bob("bob", 150);
		std::cout<<bob;

		std::cout<<bob.getName()<<" "<<bob.getGrade()<<std::endl;
		bob.incrementGrade();
		std::cout<<bob;
		bob.decrementGrade();
		std::cout<<bob;
		bob.decrementGrade();

	}
	catch(std::exception & e){
		std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	}
	std::cout<<std::endl;
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

	std::cout<<std::endl;

	try{
		Bureaucrat henry("henry", 151);
	}
	catch(std::exception & e){
		std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	}

	std::cout<<std::endl;

	try{
		Bureaucrat garry("garry", 0);
	}
	catch(std::exception & e){
		std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	}

	std::cout<<std::endl;

	try{
		Bureaucrat franz("franz", -1);
	}
	catch(std::exception & e){
		std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	}

	return (0);
}
