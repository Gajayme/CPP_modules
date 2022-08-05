/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gajayme <gajayme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:33:54 by lyubov            #+#    #+#             */
/*   Updated: 2022/08/05 22:19:45 by gajayme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>

# define COLOR_DEFAULT "\033[0m"
# define COLOR_RED "\033[31m"
# define COLOR_GREEN "\033[32m"
# define COLOR_BLUE "\033[34m"
# define COLOR_MAGENTA "\033[35m"
# define COLOR_YELLOW "\033[33m"

class RobotomyRequestForm: public Form
{
private:

	RobotomyRequestForm & operator =(const RobotomyRequestForm &a);
	std::string target_;

public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &a);
	~RobotomyRequestForm();

	virtual void beSigned(const Bureaucrat &a);
	virtual void execute(Bureaucrat const & executor) const;

};

#endif
