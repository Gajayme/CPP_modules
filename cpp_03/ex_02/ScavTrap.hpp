/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:05:46 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/25 13:25:01 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{
private:

public:

	ScavTrap(std::string string = "Default");
	ScavTrap(const ScavTrap & a);
	ScavTrap & operator=(const ScavTrap & a);
	~ScavTrap();

	void attack(const std::string& target);
	void guardGate();

	static const unsigned int hp_init = 100;
	static const unsigned int en_init = 50;
	static const unsigned int ad_init = 20;
};

#endif
