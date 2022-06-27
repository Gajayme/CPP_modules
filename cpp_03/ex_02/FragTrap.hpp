/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:14:59 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/25 13:37:34 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ClapTrap
{
private:

public:

	FragTrap(std::string string = "Default");
	FragTrap(const FragTrap & a);
	FragTrap & operator=(const FragTrap & a);
	~FragTrap();

	void attack(const std::string& target);
	void highFivesGuys();

	static const unsigned int hp_init = 100;
	static const unsigned int en_init = 100;
	static const unsigned int ad_init = 30;
};


#endif
