/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 11:18:20 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/05 13:43:26 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"



Harl::Harl()
{
	lvl_arr[0] = "DEBUG";
	lvl_arr[1] = "INFO";
	lvl_arr[2] = "WARNING";
	lvl_arr[3] = "ERROR";

	funcs[0] = &Harl::debug;
	funcs[1] = &Harl::info;
	funcs[2] = &Harl::warning;
	funcs[3] = &Harl::error;
	funcs[4] = NULL;
}

Harl::~Harl()
{
}

void Harl::debug( void ){
	std::cout<<"[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-\
	\nketchup burger. I really do!\n\n";
};

void Harl::info( void ){
	std::cout<<"[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn't put enough\
	\nbacon in my burger! If you did, I wouldn't be asking for more!\n\n";
};

void Harl::warning( void ){
	std::cout<<"[ WARNING ]\nI think I deserve to have some extra bacon for free. I've been coming for years\
	\nwhereas you started working here since last month.\n\n";
};

void Harl::error( void ){
	std::cout<<"[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n";
};

void Harl::complain( std::string level ){
	int i;
	for (i=0; i != 4; ++i){
		if (level == lvl_arr[i])
			break;
	}

	switch (i) {
	case 0:
   		(this->*funcs[0])();
	 	// (this->*funcs[1])();
   		// (this->*funcs[2])();
   		// (this->*funcs[3])();
		// break;
	case 1:
	 	(this->*funcs[1])();
   		//(this->*funcs[2])();
   		//(this->*funcs[3])();
		//break;
	case 2:
   		(this->*funcs[2])();
   		//(this->*funcs[3])();
		//break;
	case 3:
   		(this->*funcs[3])();
		break;
	default:
  		std::cout<<"[ Probably complaining about insignificant problems ]\n";
	}
	// for (int i=0; i != 4; ++i){
	// 	if (level == lvl_arr[i]){
	// 		while (funcs[i]){
	// 			(this->*funcs[i])();
	// 			std::cout<<std::endl;
	// 			i++;
	// 		}
	// 		return ;
	// 	}
	//}

}
