/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 21:26:02 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/28 15:51:08 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

# define COLOR_DEFAULT "\033[0m"
# define COLOR_RED "\033[31m"
# define COLOR_GREEN "\033[32m"
# define COLOR_BLUE "\033[34m"
# define COLOR_MAGENTA "\033[35m"
# define COLOR_YELLOW "\033[33m"

class WrongAnimal
{
protected:
	std::string _type;
public:
	WrongAnimal(std::string type = "Default");
	WrongAnimal(const WrongAnimal & a);
	WrongAnimal & operator =(const WrongAnimal & a);
	virtual ~WrongAnimal();

	virtual void makeSound() const;
	std::string getType() const;

};

#endif
