/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:51:12 by lyubov            #+#    #+#             */
/*   Updated: 2022/07/17 13:24:37 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//CLASSIC
Bureaucrat::Bureaucrat(std::string name, int grade): name_(name){

	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	grade_ = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &a): name_(a.getName()), grade_(a.getGrade()){

}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &a){
	if (this != &a){
		grade_ = a.getGrade();
	}
	return (*this);
}

Bureaucrat::~Bureaucrat(){

}

void Bureaucrat::signForm(Form &a){

	a.beSigned(*this);
	//if (a.getReqGrade() < grade_)
		//std::cout<<COLOR_RED<<name_<<" couldn’t sign "<<a.getName()<<" because his grade is low\n"<<COLOR_DEFAULT;

	//else if (a.getIfSigned())
	//	std::cout<<COLOR_RED<<name_<<" couldn’t sign "<<a.getName()<<" because it is already signed\n"<<COLOR_DEFAULT;

	//else
		//std::cout<<COLOR_GREEN<<name_<<" signed "<<a.getName()<<::std::endl<<COLOR_DEFAULT;
	//std::cout<<COLOR_GREEN<<name_<<" signed "<<a.getName()<<std::endl<<COLOR_DEFAULT;

}

//GETTERS
std::string Bureaucrat::getName()const{
	return (name_);
}

int Bureaucrat::getGrade()const{
	return (grade_);
}

//INCR/DECR
void Bureaucrat::incrementGrade(){
	if (grade_ == 1){
		throw GradeTooHighException();
	}
	grade_ --;
}

void Bureaucrat::decrementGrade(){
	if (grade_ == 150){
		throw GradeTooLowException();
	}
	grade_ ++;
}

//COUT
std::ostream & operator <<(std::ostream &out, const Bureaucrat &a){

	out<<COLOR_BLUE<<a.getName()<<", bureaucrat grade "<<a.getGrade()<<std::endl<<COLOR_DEFAULT;
	return (out);
}

//EXCEPTION
const char * Bureaucrat::GradeTooHighException::what() const throw(){
	return("BureaucratException: grade too hight");
}

const char * Bureaucrat::GradeTooLowException::what() const throw(){
	return("BureaucratException: grade too low");
}
