/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 21:51:57 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/29 14:20:58 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>


class Cat: public Animal
{
private:
	Brain *brain;
public:

	Cat();
	Cat(const Cat & a);
	Cat & operator =(const Cat & a);
	~Cat();

	void		makeSound() const ;
	std::string	getType() const ;
	std::string	get_idea(unsigned int num) const ;

};

#endif
