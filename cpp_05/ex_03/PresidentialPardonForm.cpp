/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:33:57 by lyubov            #+#    #+#             */
/*   Updated: 2022/07/19 12:19:03 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form::Form("PresidentialPardonForm", 25, 5), target_(target){

	std::cout<<"Presidential constructor\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &a): Form::Form(a.getName(), a.getSGrade(), a.getEGrade()), target_(a.target_){

	set_if_signed(a.getIfSigned());
	std::cout<<"Presidential copy\n";

}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &a){
	(void) a;

	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){

	std::cout<<"Presidential destructor\n";
}

void PresidentialPardonForm::beSigned(const Bureaucrat &a){
	Form::beSigned(a);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {

	Form::execute(executor);
	std::cout<<COLOR_GREEN<<target_<<" has been pardoned by Zaphod Beeblebrox!\n"<<COLOR_DEFAULT;
	}

