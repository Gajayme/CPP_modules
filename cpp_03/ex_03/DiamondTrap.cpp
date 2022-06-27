/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:31:37 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/26 19:19:36 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string string):

	ClapTrap(string + "_clap_name"),
	ScavTrap(string + "_clap_name"),
	FragTrap(string + "_clap_name"){

	std::cout<<"DiamondTrap constructor called\n";
	name = string;
	hit_points = FragTrap::hp_init;
	energy_points = ScavTrap::energy_points;
	attac_damage = FragTrap::attac_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap & a){

	std::cout<<"DiamondTrap copy constructor called\n";
	this->hit_points = a.hit_points;
	this->energy_points = a.energy_points;
	this->attac_damage = a.attac_damage;

	this->name = a.name;
	this->ClapTrap::name = a.ClapTrap::name;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap & a){

	std::cout<<"DiamondTrap assignment operator called\n";
	this->hit_points = a.hit_points;
	this->energy_points = a.energy_points;
	this->attac_damage = a.attac_damage;

	this->name = a.name;
	this->ClapTrap::name = a.ClapTrap::name;
	return (*this);
}

DiamondTrap::~DiamondTrap(){

	std::cout<<"DiamondTrap destructor called\n";
}

void DiamondTrap::attac(const std::string& target){

	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(){

	std::cout<<COLOR_WHITE<<"WHO AM I: "<<name<<" "<<ClapTrap::name<<COLOR_DEFAULT<<std::endl;
}
