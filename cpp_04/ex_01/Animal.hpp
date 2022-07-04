/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 21:26:02 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/29 14:21:10 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

# define COLOR_DEFAULT "\033[0m"
# define COLOR_RED "\033[31m"
# define COLOR_GREEN "\033[32m"
# define COLOR_BLUE "\033[34m"
# define COLOR_MAGENTA "\033[35m"
# define COLOR_YELLOW "\033[33m"

class Animal
{
protected:
	std::string _type;
public:

	Animal(std::string type = "Default");
	Animal(const Animal & a);
	Animal & operator =(const Animal & a);
	virtual ~Animal();

	virtual void		makeSound() const;
	virtual std::string	get_idea(unsigned int num) const;
	std::string			getType() const;

};

#endif
