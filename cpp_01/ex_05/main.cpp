/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 11:15:24 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/04 12:42:19 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void){
	Harl lil_harl;

	lil_harl.complain("debug");
	std::cout<<std::endl;
	lil_harl.complain("info");
	std::cout<<std::endl;
	lil_harl.complain("warning");
	std::cout<<std::endl;
	lil_harl.complain("error");
	return (0);
}
