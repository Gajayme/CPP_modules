/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gajayme <gajayme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 18:30:44 by lyubov            #+#    #+#             */
/*   Updated: 2022/08/05 22:13:29 by gajayme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


//CLASSIC
Form::Form(std::string name, int sgrade, int egrade): name_(name), sign_grade_(sgrade), exec_grade_(egrade){

	std::cout<<"Form constructor\n";
	if (sign_grade_ > 150 || exec_grade_ > 150){
		throw GradeTooLowException();
	}
	else if(sign_grade_ < 1 || exec_grade_ < 1){
		throw GradeTooHighException();
	}
	if_signed_ = 0;
}

Form::Form(const Form &a): name_(a.getName()), sign_grade_(a.getSGrade()), exec_grade_(a.getEGrade()),if_signed_(a.getIfSigned()){
	std::cout<<"Form copy\n";

}

Form::~Form(){
	std::cout<<"Form destrutor\n";
}


//not to use!
Form & Form::operator=(const Form & a){
	(void) a;
	return (*this);
}

void Form::beSigned(const Bureaucrat &a){

	if (a.getGrade() > sign_grade_){
		std::cout<<COLOR_YELLOW<<a.getName()<<" couldn’t sign "<<name_<<" because his grade is low\n"<<COLOR_DEFAULT;
		throw GradeTooLowException();
	}
	else if (if_signed_){
			std::cout<<COLOR_YELLOW<<a.getName()<<" couldn’t sign "<<name_<<" because it is already signed\n"<<COLOR_DEFAULT;
		throw FormAlreadySignedException();
	}
	if_signed_ = 1;
	std::cout<<COLOR_GREEN<<a.getName()<<" signed "<<name_<<::std::endl<<COLOR_DEFAULT;
}

void Form::execute(const Bureaucrat &a) const{

	if (a.getGrade() > exec_grade_){
		std::cout<<COLOR_YELLOW<<a.getName()<<" couldn’t exec "<<name_<<" because his grade is low\n"<<COLOR_DEFAULT;
		throw GradeTooLowException();
	}
	else if (!if_signed_){
			std::cout<<COLOR_YELLOW<<a.getName()<<" couldn’t exec "<<name_<<" because its unsigned\n"<<COLOR_DEFAULT;
		throw FormUnsignedException();
	}
	std::cout<<COLOR_GREEN<<a.getName()<<" exec "<<name_<<::std::endl<<COLOR_DEFAULT;
}

void Form::set_if_signed(bool if_signed){
	if_signed_ = if_signed;
}

//GETTERS
std::string Form::getName() const{
	return (name_);
}

int	Form::getSGrade() const{
	return (sign_grade_);
}

int Form::getEGrade() const{
	return(exec_grade_);
}

bool Form::getIfSigned() const{
	return (if_signed_);
}


//COUT
std::ostream & operator <<(std::ostream &out, const Form & a){
	out<<COLOR_MAGENTA<<a.getName()<<" form, sign grade: "<<a.getSGrade()<<" "<<"exec grade: "<<a.getEGrade();
	if (a.getIfSigned())
		out<<COLOR_GREEN<<". Signed\n"<<COLOR_DEFAULT;
	else
		out<<COLOR_DEFAULT<<". Unsigned\n";

	return (out);
}


//EXCEPTIONS
const char * Form::GradeTooHighException::what() const throw(){
	return("FormException: grade too hight");
}

const char * Form::GradeTooLowException::what() const throw(){
	return("FormException: grade too low");
}

const char * Form::FormAlreadySignedException::what() const throw(){
	return("FormException: form already signed");
}

const char * Form::FormUnsignedException::what() const throw(){
	return("FormException: form unsigned");
}
