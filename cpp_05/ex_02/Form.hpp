/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 18:26:31 by lyubov            #+#    #+#             */
/*   Updated: 2022/07/19 12:12:51 by lyubov           ###   ########.fr       */
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
	const int			sign_grade_;
	const int			exec_grade_;
	bool				if_signed_;

	Form & operator =(const Form &a);

protected:

	void	set_if_signed(bool if_signed);

public:

	//CLASSIC
	Form(std::string name, int s_grade = 150, int e_grade = 150);
	Form(const Form &a);
	virtual ~Form();

	virtual void beSigned(const Bureaucrat &a) = 0;
	virtual void execute(Bureaucrat const & executor) const = 0;

	//GETTERS
	std::string	getName() const;
	int			getSGrade() const;
	int			getEGrade() const;
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

	class FormUnsignedException: public std::exception{
		virtual const char *what() const throw();
	};
};

std::ostream & operator <<(std::ostream &out, const Form &a);

#endif
