/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:29:28 by lyubov            #+#    #+#             */
/*   Updated: 2022/07/04 17:28:39 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main (void){

	AMateria* ice = new Ice();
	AMateria* cure = new Cure();
	std::cout<<std::endl;
	Character *timmy = new Character("Timmy");

	timmy->equip(ice);
	timmy->equip(cure);

	std::cout<<std::endl;

	Character *neddy = new Character(*timmy);
	neddy->set_name("Neddy");

	std::cout<<std::endl;

	neddy->use(0, *timmy);
	neddy->use(1, *timmy);
	neddy->use(2, *timmy);

	std::cout<<std::endl;

	delete timmy;
	delete neddy;

	std::cout<<std::endl;
	// ice->getType();
	// cure->getType();
	// std::cout<<timmy->getName()<<std::endl;
	// std::cout<<neddy->getName()<<std::endl;
	// timmy->equip(ice);
	// timmy->equip(ice);
	// timmy->equip(cure);
	// timmy->equip(cure);
	// timmy->equip(cure);
	// neddy->equip(cure);
	// timmy->use(0, *neddy);
	// timmy->use(1, *neddy);
	// timmy->use(2, *neddy);
	// timmy->use(3, *neddy);
	// timmy->use(4, *neddy);
	// timmy->use(0, *neddy);
	// neddy->use(0, *timmy);

	// delete timmy;
	// delete neddy;



	// Ice *ice2;

	// std::cout<<std::endl;

	// std::cout<<ice.getType()<<std::endl;
	// ice2 = ice.clone();
	// std::cout<<ice2->getType()<<std::endl;

	// std::cout<<std::endl;

	// Cure cure;
	// Cure* cure2;

	// std::cout<<std::endl;

	// std::cout<<cure.getType()<<std::endl;
	// cure2 = cure.clone();
	// std::cout<<cure2->getType()<<std::endl;

	// std::cout<<std::endl;

	// delete ice2;
	// delete cure2;
	return (0);
}
