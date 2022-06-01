/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gajayme <gajayme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:21:11 by gajayme           #+#    #+#             */
/*   Updated: 2022/06/01 19:41:50 by gajayme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>



class Zombie{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce( void );
	private:
		std::string name;
};

Zombie*    zombieHorde( int N, std::string name );

#endif
