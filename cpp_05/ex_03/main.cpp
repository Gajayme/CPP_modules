/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:46:06 by lyubov            #+#    #+#             */
/*   Updated: 2022/07/22 18:26:58 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"


void test(int test_num, std::string form_name, std::string target,int bur_lvl){

	std::cout<<COLOR_MAGENTA<<"\n==="<<test_num<<"st case===\n\n"<<COLOR_DEFAULT;

	Form *a1 = nullptr;

	try{
		Intern alex;
		a1 = alex.makeForm(form_name, target);
		std::cout<<*a1;
		Bureaucrat bob("bob", bur_lvl);
		bob.signForm(*a1);
		bob.executeForm(*a1);
		delete a1;
	}
	catch (std::exception &e){
		std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
		delete a1;
	}
}


int main(void){

	test(1, "dzfwegnjwg", "home", 1);
	test(2, "ShrubberyCreationForm", "home", 1);
	test(3, "RobotomyRequestForm", "bender", 1);
	test(4, "PresidentialPardonForm", "gajayme", 1);
	test(5, "PresidentialPardonForm", "gajayme", 150);
	test(6, "PresidentialPardonForm", "gajayme", 6);


	// std::cout<<COLOR_MAGENTA<<"\n===1st case===\n\n"<<COLOR_DEFAULT;

	// try{
	// 	Intern alex;
	// 	Form * a1 = alex.makeForm("ShrubberyCreationFormmmmm", "home");
	// 	std::cout<<*a1;
	// 	delete a1;
	// }
	// catch (std::exception &e){
	// 	std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	// 	delete a1;
	// }


	// a1 = nullptr;
	// std::cout<<COLOR_MAGENTA<<"\n===2st case===\n\n"<<COLOR_DEFAULT;

	// try{
	// 	Intern alex;
	// 	a1 = alex.makeForm("ShrubberyCreationForm", "home");
	// 	std::cout<<*a1;
	// 	delete a1;
	// }
	// catch (std::exception &e){
	// 	std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	// 	delete a1;
	// }

	// a1 = nullptr;
	// std::cout<<COLOR_MAGENTA<<"\n===3st case===\n\n"<<COLOR_DEFAULT;

	// try{
	// 	Intern alex;
	// 	a1 = alex.makeForm("RobotomyRequestForm", "bender");
	// 	std::cout<<*a1;

	// 	Bureaucrat bob("bob", 1);
	// 	bob.signForm(*a1);
	// 	bob.executeForm(*a1);
	// 	delete a1;

	// }
	// catch (std::exception &e){
	// 	std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	// 	delete a1;
	// }

	// std::cout<<COLOR_MAGENTA<<"\n===4st case===\n\n"<<COLOR_DEFAULT;
	// a1 = nullptr;

	// try{
	// 	Intern alex;
	// 	a1 = alex.makeForm("ShrubberyCreationForm", "garden");
	// 	std::cout<<*a1;

	// 	Bureaucrat bob("bob", 1);
	// 	bob.signForm(*a1);
	// 	bob.executeForm(*a1);
	// 	delete a1;

	// }
	// catch (std::exception &e){
	// 	std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	// 	delete a1;
	// }

	// std::cout<<COLOR_MAGENTA<<"\n===5st case===\n\n"<<COLOR_DEFAULT;
	// a1 = nullptr;

	// try{
	// 	Intern alex;
	// 	a1 = alex.makeForm("PresidentialPardonForm", "gajayme");
	// 	std::cout<<*a1;

	// 	Bureaucrat bob("bob", 1);
	// 	bob.signForm(*a1);
	// 	bob.executeForm(*a1);
	// 	delete a1;

	// }
	// catch (std::exception &e){
	// 	std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	// 	delete a1;
	// }

	// std::cout<<COLOR_MAGENTA<<"\n===6st case===\n\n"<<COLOR_DEFAULT;
	// 1 = nullptr;

	// try{
	// 	Intern alex;
	// 	a1 = alex.makeForm("PresidentialPardonForm", "gajayme");
	// 	std::cout<<*a1;

	// 	Bureaucrat bob("bob", 140);
	// 	bob.signForm(*a1);
	// 	bob.executeForm(*a1);
	// 	delete a1;

	// }
	// catch (std::exception &e){
	// 	std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	// 	delete a1;
	// }

	// std::cout<<COLOR_MAGENTA<<"\n===7st case===\n\n"<<COLOR_DEFAULT;
	// a1 = nullptr;

	// try{
	// 	Intern alex;
	// 	a1 = alex.makeForm("PresidentialPardonForml", "gajayme");
	// 	std::cout<<*a1;

	// 	Bureaucrat bob("bob", 6);
	// 	bob.signForm(*a1);
	// 	bob.executeForm(*a1);
	// 	delete a1;

	// }
	// catch (std::exception &e){
	// 	std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	// 	delete a1;
	// }

	return (0);
}
