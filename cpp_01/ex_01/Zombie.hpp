/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:21:11 by gajayme           #+#    #+#             */
/*   Updated: 2022/06/02 14:33:42 by lyubov           ###   ########.fr       */
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
		void set_name( std::string name );
	private:
		std::string name;
};

Zombie*    zombieHorde( int N, std::string name );

#endif
