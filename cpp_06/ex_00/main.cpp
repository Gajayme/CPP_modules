/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 21:35:11 by lyubov            #+#    #+#             */
/*   Updated: 2022/08/07 15:41:13 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int main(int ac, char *av[]){

	if (ac != 2){
		std::cout<<COLOR_RED<<"Invalid amount of arguments\n"<<COLOR_DEFAULT;
		return (1);
	}
	try{
		Converter c1(av[1]);
		std::cout<<c1<<std::endl;
	}
	catch(std::exception &e){
		std::cout<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	}

	return (0);
}
