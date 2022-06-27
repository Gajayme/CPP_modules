/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:42:19 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/25 13:28:30 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main(void){

	ScavTrap a;
	ScavTrap b("Joe");
	ScavTrap d(b);

	b = ScavTrap("Billy");
	a = d;

	std::cout<<std::endl;
	b.attack("Enemy_1");
	std::cout<<std::endl;
	b.takeDamage(10);
	std::cout<<std::endl;
	b.beRepaired(5);
	std::cout<<std::endl;
	b.beRepaired(50);
	std::cout<<std::endl;
	b.takeDamage(1000);
	std::cout<<std::endl;
	b.guardGate();
	std::cout<<std::endl;
	d.attack("Enemy_2");
	std::cout<<std::endl;
	a.attack("Enemy_3");
	std::cout<<std::endl;

	for (int i = 0; i != 51; ++i){
		a.attack("Enemy");
	}
	std::cout<<std::endl;
	return (0);
}
