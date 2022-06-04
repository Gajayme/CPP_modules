/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 11:18:20 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/04 12:48:51 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"



Harl::Harl()
{
	lvl_arr[0] = "debug";
	lvl_arr[1] = "info";
	lvl_arr[2] = "warning";
	lvl_arr[3] = "error";

	funcs[0] = &Harl::debug;
	funcs[1] = &Harl::info;
	funcs[2] = &Harl::warning;
	funcs[3] = &Harl::error;

	//func_to_call = NULL;
}

Harl::~Harl()
{
}

void Harl::debug( void ){
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-\
	\nketchup burger. I really do!\n";
};

void Harl::info( void ){
	std::cout<<"I cannot believe adding extra bacon costs more money. You didn't put enough\
	\nbacon in my burger! If you did, I wouldn't be asking for more!\n";
};

void Harl::warning( void ){
	std::cout<<"I think I deserve to have some extra bacon for free. I've been coming for years\
	\nwhereas you started working here since last month.\n";
};

void Harl::error( void ){
	std::cout<<"This is unacceptable! I want to speak to the manager now.\n";
};

void Harl::complain( std::string level ){

	for (int i=0; i != 4; ++i){
		if (level == lvl_arr[i]){
			//func_to_call = funcs[i];
			//(this->*func_to_call)();
			(this->*funcs[i])();
		}
	}

}
