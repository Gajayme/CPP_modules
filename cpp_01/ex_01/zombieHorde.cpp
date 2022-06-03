/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 19:41:07 by gajayme           #+#    #+#             */
/*   Updated: 2022/06/02 14:43:50 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name ){

	Zombie *new_zom = new Zombie[N];
	for (int i = 0; i != N; ++i){
		new_zom[i].set_name(name);
	}
	return new_zom;
}
