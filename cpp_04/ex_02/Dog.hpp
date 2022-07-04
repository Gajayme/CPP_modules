/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 21:51:57 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/29 14:21:02 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>


class Dog: public Animal
{

private:
	Brain *brain;
public:

	Dog();
	Dog(const Dog & a);
	Dog & operator =(const Dog & a);
	~Dog();

	void		makeSound() const ;
	std::string	getType() const ;
	std::string	get_idea(unsigned int num) const ;
};

#endif
