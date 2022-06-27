/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:05:50 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/25 13:56:54 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string string): ClapTrap(string){

	std::cout<<"ScavTrap contructor called\n";
	max_hp = hp_init;
	max_en = en_init;
	hit_points = hp_init;
	energy_points = en_init;
	attac_damage = ad_init;
}

ScavTrap::ScavTrap(const ScavTrap & a): ClapTrap(a){

	std::cout<<"ScavTrap copy contructor called\n";
}

ScavTrap & ScavTrap::operator=(const ScavTrap & a) {
	std::cout<<"ScavTrap assignment operator called\n";
	if (this != &a)
		ClapTrap::operator=(a);
	return (*this);
}

ScavTrap::~ScavTrap(){
	std::cout<<"ScavTrap destructor called\n";
}

void ScavTrap::attack(const std::string& target){
	if (energy_points){
		energy_points -= 1;
		std::cout<<"ScavTrap "<<name<<" attacks "<<target<<" causing "<<COLOR_RED<<attac_damage<<COLOR_DEFAULT
		<<" points of damage!\n"<<COLOR_BLUE<<"Energy left: "<< energy_points<<std::endl<<COLOR_DEFAULT;
		return ;
	}
	std::cout<<"ScavTrap "<<name<<" has no energy to attac\n";
}

void ScavTrap::guardGate(){

	std::cout<<COLOR_MAGENTA<<"ScavTrap "<<name<<" have entered Guard Keeper Mode\n"<<COLOR_DEFAULT;
}
