/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 21:22:09 by lyubov            #+#    #+#             */
/*   Updated: 2022/07/08 13:40:41 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void){

	std::cout<<"===My tests===\n\n";

	Animal anim;
	Animal anim_1("Unknown animal");

	std::cout<<anim.getType()<<std::endl;
	anim_1.getType();


	Cat cat;
	Dog dog;
	dog.makeSound();
	cat.makeSound();

	cat.getType();
	dog.getType();

	std::cout<<"\n===Subject tests===\n\n";

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout<<"\n===WrongTest==\n\n";
	const WrongAnimal* h = new WrongCat();
	std::cout << h->getType() << " " << std::endl;
	h->makeSound();
	std::cout<<"\n===End==\n\n";

	delete meta;
	delete j;
	delete i;
	delete h;
	return (0);
}
