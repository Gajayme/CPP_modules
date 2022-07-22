/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:33:54 by lyubov            #+#    #+#             */
/*   Updated: 2022/07/19 12:19:07 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <string>
#include <iostream>
#include <fstream>

# define COLOR_DEFAULT "\033[0m"
# define COLOR_RED "\033[31m"
# define COLOR_GREEN "\033[32m"
# define COLOR_BLUE "\033[34m"
# define COLOR_MAGENTA "\033[35m"
# define COLOR_YELLOW "\033[33m"

class ShrubberyCreationForm: public Form
{
private:

	std::string target_;
	ShrubberyCreationForm & operator =(const ShrubberyCreationForm &a);

public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &a);
	~ShrubberyCreationForm();

	virtual void beSigned(const Bureaucrat &a);
	virtual void execute(Bureaucrat const & executor) const;

};

#endif
