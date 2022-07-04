/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:42:19 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/30 15:50:24 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


int main(void){

	DiamondTrap a("Willy");
	std::cout<<std::endl;
	DiamondTrap b("Harry");
	std::cout<<std::endl;
	DiamondTrap c(b);
	std::cout<<std::endl;
	DiamondTrap d;
	std::cout<<std::endl;
	c = a;
	std::cout<<std::endl;

	a.whoAmI();
	b.whoAmI();
	c.whoAmI();
	d.whoAmI();

	std::cout<<std::endl;
	a.guardGate();
	a.highFivesGuys();
	std::cout<<std::endl;
	a.attac("ENEMY");
	a.takeDamage(54);
	a.takeDamage(54);
	a.beRepaired(5);
	a.beRepaired(54);
	a.beRepaired(54);
	std::cout<<std::endl;


	return (0);
}
