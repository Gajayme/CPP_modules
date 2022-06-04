/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 11:15:24 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/04 19:40:37 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void){
	Harl harl;

	harl.complain("DEBUG");
	std::cout<<std::endl;
	harl.complain("INFO");
	std::cout<<std::endl;
	harl.complain("WARNING");
	std::cout<<std::endl;
	harl.complain("ERROR");
	return (0);
}
