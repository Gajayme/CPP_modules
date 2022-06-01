/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gajayme <gajayme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:31:58 by gajayme           #+#    #+#             */
/*   Updated: 2022/06/01 19:34:11 by gajayme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){

	Zombie *a;
	Zombie *b;
	
	a = newZombie("Jil");
	b = newZombie("Barry");
	a->announce();
	a->announce();
	delete a;
	randomChump("Dan");
	randomChump("Paul");
	randomChump("George");
	b->announce();
	delete b;
	return (0);
}
