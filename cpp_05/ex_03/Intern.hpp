/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:00:19 by lyubov            #+#    #+#             */
/*   Updated: 2022/07/22 16:33:04 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

# define COLOR_DEFAULT "\033[0m"
# define COLOR_RED "\033[31m"
# define COLOR_GREEN "\033[32m"
# define COLOR_BLUE "\033[34m"
# define COLOR_MAGENTA "\033[35m"
# define COLOR_YELLOW "\033[33m"

class Intern
{
private:

public:
	Intern();
	Intern(const Intern &a);
	~Intern();

	Intern & operator=(const Intern &a);

	Form * makeForm(const std::string &form_name, const std::string &target);

	class InvalidFormName: public std::exception{
		virtual const char *what() const throw();
	};

};

#endif
