/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 21:51:57 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/28 14:26:38 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>


class WrongCat: public WrongAnimal
{

private:

public:
	WrongCat();
	WrongCat(const WrongCat & a);
	WrongCat & operator =(const WrongCat & a);
	~WrongCat();

	void makeSound() const ;
	std::string getType() const ;

};

#endif
