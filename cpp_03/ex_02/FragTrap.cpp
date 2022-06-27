/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:14:36 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/25 13:59:03 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string string): ClapTrap(string){

	hit_points = hp_init;
	energy_points = en_init;
	attac_damage = ad_init;
	max_hp = hp_init;
	max_en = en_init;

	std::cout<<"FragTrap contructor called\n";
}

FragTrap::FragTrap(const FragTrap & a): ClapTrap(a){

	std::cout<<"FragTrap copy contructor called\n";
}

FragTrap & FragTrap::operator=(const FragTrap & a) {
	std::cout<<"FragTrap assignment operator called\n";
	if (this != &a)
		ClapTrap::operator=(a);
	return (*this);
}

FragTrap::~FragTrap(){
	std::cout<<"FragTrap destructor called\n";
}

void FragTrap::attack(const std::string& target){
	if (energy_points){
		energy_points -= 1;
		std::cout<<"FragTrap "<<name<<" attacks "<<target<<" causing "<<COLOR_RED<<attac_damage<<" points of damage!\n"
		<<COLOR_BLUE<<"Energy left: "<< energy_points<<std::endl<<COLOR_DEFAULT;
		return ;
	}
	std::cout<<"FragTrap "<<name<<" has no energy to attac\n";
}

void FragTrap::highFivesGuys(){

	std::cout<<COLOR_YELLOW<<"FragTrap "<<name<<": HIGHTFIVEGUYS!!!!\n"<<COLOR_DEFAULT;
}
