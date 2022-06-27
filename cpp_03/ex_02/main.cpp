/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:42:19 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/25 13:57:48 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main(void){

	ClapTrap a;
	ClapTrap b("Iggy");
	FragTrap c;
	FragTrap d("Bobby");
	c = FragTrap("Dufelshmertz");

	std::cout<<std::endl;
	c.attack("Someone");
	std::cout<<std::endl;
	c.beRepaired(10);
	std::cout<<std::endl;
	c.takeDamage(50);
	std::cout<<std::endl;
	c.takeDamage(100);
	std::cout<<std::endl;
	c.beRepaired(1);
	std::cout<<std::endl;
	c.beRepaired(999);
	std::cout<<std::endl;
	c.highFivesGuys();
	std::cout<<std::endl;

	return (0);
}
