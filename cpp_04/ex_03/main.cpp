/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:29:28 by lyubov            #+#    #+#             */
/*   Updated: 2022/07/07 22:57:21 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

#include "Ice.hpp"
#include "Cure.hpp"

int main (void){


//	new
	IMateriaSource* src = new MateriaSource();
	std::cout<<std::endl;

	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());

	std::cout<<std::endl;

	ICharacter* me = new Character("Me");
	ICharacter* bob = new Character("Enemy");
	std::cout<<std::endl;

	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("fire"));

	std::cout<<std::endl;

	me->use(3, *bob);

	std::cout<<std::endl;
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("cure"));
	std::cout<<std::endl;

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);
	std::cout<<std::endl;

	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	me->unequip(4);
	std::cout<<std::endl;

	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("cure"));
	me->use(3, *bob);

	std::cout<<std::endl;
	delete bob;
	delete me;
	std::cout<<std::endl;
	delete src;

	return 0;

//OLD
	// AMateria* ice = new Ice();
	// AMateria* cure = new Cure();
	// std::cout<<std::endl;
	// Character *timmy = new Character("Timmy");

	// timmy->equip(ice);
	// timmy->equip(cure);

	// std::cout<<std::endl;

	// Character *neddy = new Character(*timmy);
	// neddy->set_name("Neddy");

	// std::cout<<std::endl;

	// neddy->use(0, *timmy);
	// neddy->use(1, *timmy);
	// neddy->use(2, *timmy);

	// std::cout<<std::endl;

	// delete timmy;
	// delete neddy;

	// std::cout<<std::endl;

//OLD OLD
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
