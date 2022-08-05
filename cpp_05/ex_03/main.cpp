/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gajayme <gajayme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:46:06 by lyubov            #+#    #+#             */
/*   Updated: 2022/08/05 22:20:56 by gajayme          ###   ########.fr       */
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

	Form *a1 = 	NULL;

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

	return (0);
}
