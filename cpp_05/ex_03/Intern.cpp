/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gajayme <gajayme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:00:02 by lyubov            #+#    #+#             */
/*   Updated: 2022/08/05 22:19:25 by gajayme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


static Form*	createPresidentialPardonForm(std::string const & target);
static Form*	createRobotomyRequestForm(std::string const & target);
static Form*	createShrubberyCreationForm(std::string const & target);


Intern::Intern(){
	std::cout<<"Intern constructor\n";
}

Intern::~Intern(){
	std::cout<<"Intern destructor\n";
}

Intern::Intern(const Intern & a){
	std::cout<<"Intern copy\n";
	(void)a;
}

Intern & Intern::operator=(const Intern & a){
	std::cout<<"Intern assign\n";
	(void)a;
	return (*this);
}

const char * Intern::InvalidFormName::what() const throw(){
	return "Intern Exception: can't create such a form";
}

Form * Intern::makeForm(const std::string &form_name, const std::string &target){

	Form *tmp = NULL;
	//typedef Form *(*func)(std::string const & target);

	struct Form_types {
		std::string form_name;
		Form *(*create_func)(std::string const & target);
	};

	Form_types forms[] =
	{
		{"ShrubberyCreationForm", createShrubberyCreationForm},
		{"RobotomyRequestForm", createRobotomyRequestForm},
		{"PresidentialPardonForm", createPresidentialPardonForm}
	};

	for (int i = 0; i != 3; ++i){
		if (form_name == forms[i].form_name){
			tmp = forms[i].create_func(target);
			return (tmp);
		}
	}
	throw InvalidFormName();
	//std::cout<<"Cant create such a form\n";
	//return (tmp);
}

static Form*	createShrubberyCreationForm(std::string const & target) { return (new ShrubberyCreationForm(target)); }
static Form*	createRobotomyRequestForm(std::string const & target) { return (new RobotomyRequestForm(target)); }
static Form*	createPresidentialPardonForm(std::string const & target) { return (new PresidentialPardonForm(target)); }
