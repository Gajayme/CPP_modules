/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 21:22:09 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/29 14:47:58 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main(void){

	Cat cat1;
	Dog dog1;
	//Animal anim1;

	std::cout<<std::endl;
	cat1.makeSound();
	dog1.makeSound();
	std::cout<<std::endl;

	return (0);
}
