/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:33:57 by lyubov            #+#    #+#             */
/*   Updated: 2022/07/17 15:19:19 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form::Form("RobotomyRequestForm", 72, 45), target_(target){
	std::cout<<"Robotomy constructor\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &a): Form::Form(a.getName(), a.getSGrade(), a.getEGrade()), target_(a.target_){

	set_if_signed(a.getIfSigned());
	std::cout<<"Robotomy copy\n";

}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &a){
	(void) a;

	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){

	std::cout<<"Robotomy destructor\n";
}

void RobotomyRequestForm::beSigned(const Bureaucrat &a){
	Form::beSigned(a);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {

	Form::execute(executor);
	std::cout<<"Brrrrr...\nDrrrrr\nShkrieeeeeek\n";
	srand(time(0));
	if (rand()%2)
		std::cout<<COLOR_GREEN<<target_<<" has been robotomized!\n"<<COLOR_DEFAULT;
	else
		std::cout<<COLOR_RED<<"Robotomizing failed!\n"<<COLOR_DEFAULT;
}

