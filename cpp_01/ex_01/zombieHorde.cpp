/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gajayme <gajayme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 19:41:07 by gajayme           #+#    #+#             */
/*   Updated: 2022/06/01 19:46:52 by gajayme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name ){
	
	Zombie *new_zom = new Zombie[N];

	for (int i = 0; i != N; ++i){
		new_zom[i] = Zombie(name);
	}
	return new_zom;
}
