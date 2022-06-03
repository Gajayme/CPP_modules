/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Humanb.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gajayme <gajayme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 18:28:48 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/03 17:44:58 by gajayme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):name(name), weapon(NULL){
	//std::cout<<name<<" is created"<<std::endl;
}

HumanB::HumanB(std::string name, Weapon& weapon_new):name(name),
				weapon(&weapon_new){
	//std::cout<<name<<" is created"<<std::endl;
}

HumanB::~HumanB(){
	//std::cout<<name<<" killed"<<std::endl;
}

void HumanB::attack(){
	if (weapon)
		std::cout<<name<<" attacks with their "<<(*weapon).getType()<<std::endl;
	else 
		std::cout<<name<<" has no weapon\n";
		
}

void HumanB::setWeapon(Weapon& weapon_new){
	weapon = &weapon_new;
}
