/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 11:15:24 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/04 19:50:07 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char *av[]){

	if (ac != 2){
		std::cout<<"Invalid args\n";
		return (1);
	}

	Harl harl;
	std::string lvl(av[1]);
	harl.complain(lvl);
	return (0);
}
