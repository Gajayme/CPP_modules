/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:54:39 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/03 14:13:56 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type){
	std::cout<<type<<" created\n";
}

Weapon::~Weapon(){
	std::cout<<type<<" broken\n";
}

void Weapon::setType(std::string new_type){
	type = new std::string (new_type);
	//std::cout<<"seted\n";
}

std::string& Weapon::getType(){
	return type;
}
