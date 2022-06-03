/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:45:41 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/03 14:08:21 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

int main(void){

	Weapon  club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();

	// Weapon  club = Weapon("crude spiked club");
	// HumanA bob("Bob", &club);
	// bob.attack();
	// club.setType("some other type of club");
	// bob.attack();
	// return(0);
}
