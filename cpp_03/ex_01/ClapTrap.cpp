/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:10:30 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/25 13:14:08 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string string): name(string), hit_points(hp_init), energy_points(en_init), attac_damage(ad_init){

	max_hp = hp_init;
	max_en = en_init;
	std::cout<<"Constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap & a) {

	std::cout<<"Copy constructor called\n";
	name = a.name;
	hit_points = a.hit_points;
	energy_points = a.energy_points;
	attac_damage = a.attac_damage;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & a){

	std::cout<<"Assignment operator called\n";
	if (this != &a){
		name = a.name;
		hit_points = a.hit_points;
		energy_points = a.energy_points;
		attac_damage = a.attac_damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap(){
	std::cout<<"Destructor called\n";

}

void ClapTrap::attack(const std::string& target){
	if (energy_points){
		energy_points -= 1;
		std::cout<<"ClapTrap "<<name<<" attacks "<<target<<" causing "<<COLOR_RED<<attac_damage<<COLOR_DEFAULT
		<<" points of damage!\n"<<COLOR_BLUE<<"Energy left: "<<energy_points<<COLOR_DEFAULT<<std::endl;
		return ;
	}
	std::cout<<"ClapTrap "<<name<<" has no energy to attac\n";
};

void ClapTrap::takeDamage(unsigned int amount){
	hit_points = (hit_points - amount) * (hit_points > amount);
	std::cout<<"ClapTrap "<<name<<" takes "<<COLOR_RED<<amount<<COLOR_DEFAULT<<" points of damage and have now "
	<<COLOR_RED<<hit_points<<" hit points\n"<<COLOR_DEFAULT;
};

void ClapTrap::beRepaired(unsigned int amount){
	if (energy_points){
		energy_points -= 1;
		hit_points = (amount + hit_points) * ((amount + hit_points) <= max_hp) + max_hp * ((amount + hit_points) > max_hp);
		std::cout<<"ClapTrap "<<name<<" repaire itself by "<<COLOR_GREEN<<amount<<COLOR_DEFAULT<<" points and have now "
		<<COLOR_GREEN<<hit_points<< " hit points\n"<<COLOR_BLUE<<"Energy left: "<< energy_points<<COLOR_DEFAULT<<std::endl;
		return ;
	}
	std::cout<<"ClapTrap "<<name<<" has no energy to repair itself\n";
}
