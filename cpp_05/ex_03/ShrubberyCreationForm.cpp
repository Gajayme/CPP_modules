/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:33:57 by lyubov            #+#    #+#             */
/*   Updated: 2022/07/19 12:19:03 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form::Form("ShrubberyCreationForm", 145, 137), target_(target){

	std::cout<<"Shrubbery constructor\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &a): Form::Form(a.getName(), a.getSGrade(), a.getEGrade()), target_(a.target_){

	set_if_signed(a.getIfSigned());
	std::cout<<"Shrubbery copy\n";

}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &a){
	(void) a;

	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){

	std::cout<<"Shrubbery destructor\n";
}

void ShrubberyCreationForm::beSigned(const Bureaucrat &a){
	Form::beSigned(a);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {

	Form::execute(executor);

	std::ofstream output(target_ + "_shrubbery");
	std::string shrub ="           {{ }{\n"
"          {{}}}{{\n"
"        {{}}{}}\n"
"           }}}}{\n"
"          {{}}}\n"
"         }{{}{}}\n"
"           {{}{}}\n"
"         }}{{}}\n"
"          {{}}{{\n"
"            | |\n"
"        .-''| |``-.\n"
"       '-._/_o_|_.-'\n"
"        `._     _.'\n"
"         |Gajayme|\n"
"         `._    .'\n"
"            `--'\n";

	output<<shrub;
}

