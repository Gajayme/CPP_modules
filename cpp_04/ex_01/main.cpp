/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 21:22:09 by lyubov            #+#    #+#             */
/*   Updated: 2022/07/08 13:45:58 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main(void){

	Animal * arr[4];

	for (int i = 0; i != 10; ++i){
		if (i < 4){
			arr[i] = new Dog();
		}
		else
			arr[i] = new Cat();
	}

	std::cout<<std::endl;
	std::cout<<arr[0]->get_idea(1)<<std::endl;
	std::cout<<arr[0]->get_idea(2)<<std::endl;
	std::cout<<arr[0]->get_idea(100)<<std::endl;
	std::cout<<arr[3]->get_idea(1)<<std::endl;
	std::cout<<arr[3]->get_idea(99)<<std::endl;
	std::cout<<arr[3]->get_idea(-50)<<std::endl;
	std::cout<<std::endl;

	for (int i = 0; i != 10; ++i){
		delete arr[i];
	}

	return (0);
}
