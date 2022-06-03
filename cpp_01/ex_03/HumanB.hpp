/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gajayme <gajayme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 18:20:12 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/03 17:44:21 by gajayme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB	
{
private:
	std::string	name;
	Weapon*		weapon;
public:
	HumanB(std::string name);
	HumanB(std::string name, Weapon& weapon_new);
	~HumanB();
	void attack();
	void setWeapon(Weapon& weapon_new);
};

#endif
