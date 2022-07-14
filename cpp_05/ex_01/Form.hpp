/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 18:26:31 by lyubov            #+#    #+#             */
/*   Updated: 2022/07/14 20:40:08 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

# define COLOR_DEFAULT "\033[0m"
# define COLOR_RED "\033[31m"
# define COLOR_GREEN "\033[32m"
# define COLOR_BLUE "\033[34m"
# define COLOR_MAGENTA "\033[35m"
# define COLOR_YELLOW "\033[33m"

class Form {

private:

	const std::string	name_;
	const int			required_grade_;
	bool				if_signed_;

	Form & operator =(const Form &a);

public:

	//CLASSIC
	Form(std::string name, int grade = 150);
	Form(const Form &a);
	~Form();

	void beSigned(const Bureaucrat &a);

	//GETTERS
	std::string	getName() const;
	int			getReqGrade() const;
	bool		getIfSigned() const;


	class GradeTooHighException: public std::exception{
		virtual const char *what() const throw();
	};

	class GradeTooLowException: public std::exception{
		virtual const char *what() const throw();
	};

	class FormAlreadySignedException: public std::exception{
		virtual const char *what() const throw();
	};

};

std::ostream & operator <<(std::ostream &out, const Form &a);

#endif
