/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gajayme <gajayme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:46:06 by lyubov            #+#    #+#             */
/*   Updated: 2022/08/07 12:28:29 by gajayme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

int main(void){

	std::cout<<COLOR_MAGENTA<<"\n===1st case===\n\n"<<COLOR_DEFAULT;
	try{
		Bureaucrat bob("bob", 5);
		std::cout<<bob;
		ShrubberyCreationForm a1("home");
		std::cout<<a1;

		bob.signForm(a1);
		bob.executeForm(a1);
	}
	catch(std::exception &e){
		std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	}

	std::cout<<COLOR_MAGENTA<<"\n===2st case===\n\n"<<COLOR_DEFAULT;
	try{
		Bureaucrat bob("bob", 5);
		std::cout<<bob;
		RobotomyRequestForm a1("humanoid");
		std::cout<<a1;

		bob.signForm(a1);
		bob.executeForm(a1);
	}
	catch(std::exception &e){
		std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	}

	std::cout<<COLOR_MAGENTA<<"\n===3st case===\n\n"<<COLOR_DEFAULT;
	try{
		Bureaucrat bob("bob", 5);
		std::cout<<bob;
		PresidentialPardonForm a1("Sponge Bob");
		std::cout<<a1;

		bob.signForm(a1);
		bob.executeForm(a1);
	}
	catch(std::exception &e){
		std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	}

	std::cout<<COLOR_MAGENTA<<"\n===4st case===\n\n"<<COLOR_DEFAULT;
	try{
		Bureaucrat bob("bob", 6);
		std::cout<<bob;
		PresidentialPardonForm a1("Sponge Bob");
		std::cout<<a1;

		bob.signForm(a1);
		bob.executeForm(a1);
	}
	catch(std::exception &e){
		std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	}

	std::cout<<COLOR_MAGENTA<<"\n===5st case===\n\n"<<COLOR_DEFAULT;
	try{
		Bureaucrat bob("bob", 25);
		Bureaucrat zatrian("zatrian", 5);
		std::cout<<bob;
		PresidentialPardonForm a1("Sponge Bob");
		std::cout<<a1;

		bob.signForm(a1);
		zatrian.executeForm(a1);
	}
	catch(std::exception &e){
		std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	}

	std::cout<<COLOR_MAGENTA<<"\n===6st case===\n\n"<<COLOR_DEFAULT;
	try{
		Bureaucrat zatrian("zatrian", 5);
		std::cout<<zatrian;
		PresidentialPardonForm a1("Sponge Bob");
		std::cout<<a1;

		zatrian.executeForm(a1);
	}
	catch(std::exception &e){
		std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	}

	return (0);
}
