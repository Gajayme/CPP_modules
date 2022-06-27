/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:32:33 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/25 14:06:43 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap: public ScavTrap, public FragTrap
{
private:

	std::string name;

public:
	DiamondTrap(std::string string = "default");
	DiamondTrap(const DiamondTrap & a);
	DiamondTrap & operator=(const DiamondTrap & a);
	~DiamondTrap();

	void whoAmI();
	void attac(const std::string& target);
};

#endif
