/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:42:19 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/25 12:38:44 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){

	ClapTrap a;
	ClapTrap b("Teddy");
	ClapTrap c(b);
	ClapTrap d;

	d = b;

	std::cout<<std::endl;
	a.attack("Enemy");
	std::cout<<std::endl;
	b.attack("Enemy");
	std::cout<<std::endl;
	c.attack("Enemy");
	std::cout<<std::endl;
	d.attack("Enemy");
	std::cout<<std::endl;

	d.takeDamage(5);
	d.takeDamage(100);
	std::cout<<std::endl;
	d.beRepaired(3);
	d.beRepaired(100);
	std::cout<<std::endl;

	for (int i = 0; i != 10; ++i){
		d.attack("Enemy");
	}
	std::cout<<std::endl;
	return (0);

}
