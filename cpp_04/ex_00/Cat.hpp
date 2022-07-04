/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 21:51:57 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/28 15:54:20 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>


class Cat: public Animal
{

private:

public:
	Cat();
	Cat(const Cat & a);
	Cat & operator =(const Cat & a);
	~Cat();

	void makeSound() const ;
	std::string getType() const ;

};

#endif
