/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:13:44 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/29 14:17:07 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(std::string str){

	std::cout<<COLOR_MAGENTA<<"Brain constructor\n"<<COLOR_DEFAULT;
	for (int i = 0; i != 100; ++i){
		_ideas[i] = str + std::to_string(i);
	}
}

Brain::Brain(const Brain & a){

	std::cout<<COLOR_MAGENTA<<"Brain copy constructor\n"<<COLOR_DEFAULT;

	for (int i = 0; i != 100; ++i){
		_ideas[i] = a._ideas[i];
	}
}

Brain & Brain::operator=(const Brain & a){


	std::cout<<COLOR_MAGENTA<<"Brain assignment operator\n"<<COLOR_DEFAULT;
	if (this != &a){
		for (int i = 0; i != 100; ++i){
			_ideas[i] = a.get_idea(i);
		}
	}
	return (*this);
}

Brain::~Brain(){

	std::cout<<COLOR_MAGENTA<<"Brain destructor\n"<<COLOR_DEFAULT;
}

std::string Brain::get_idea(unsigned int num) const{

	if (num <= 99)
		return (_ideas[num]);
	return ("Invalid idea id " + std::to_string(num));
};
