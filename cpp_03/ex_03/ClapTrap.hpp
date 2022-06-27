/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:00:15 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/26 19:25:52 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

# define COLOR_DEFAULT "\033[0m"
# define COLOR_RED "\033[31m"
# define COLOR_GREEN "\033[32m"
# define COLOR_BLUE "\033[34m"
# define COLOR_MAGENTA "\033[35m"
# define COLOR_YELLOW "\033[33m"
# define COLOR_WHITE "\033[1m"

class ClapTrap
{
protected:

	std::string		name;
	unsigned int	hit_points;
	unsigned int	energy_points;
	unsigned int	attac_damage;
	unsigned int	max_hp;
	unsigned int	max_en;


public:

	ClapTrap(std::string string = "default");
	ClapTrap(const ClapTrap & a);
	ClapTrap & operator=(const ClapTrap & a);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	static const unsigned int hp_init = 10;
	static const unsigned int en_init = 10;
	static const unsigned int ad_init = 0;

};

#endif
