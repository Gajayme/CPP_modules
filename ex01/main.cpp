/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 00:00:09 by lyubov            #+#    #+#             */
/*   Updated: 2022/05/28 19:07:21 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "P_book.hpp"

int main(void)
{
	PhoneBook	phonebook;
	std::string	user_input;

	//Test
	//freopen("for_tests.txt", "r", stdin);

	//Main loop
	while (!std::cin.eof()){

		std::cout<<"Enter command\n>";
		std::getline(std::cin, user_input);
		if (user_input == "ADD" || user_input == "add")
			phonebook.add();
		else if (user_input == "SEARCH" || user_input == "search")
			phonebook.search();
		else if (user_input == "EXIT" || user_input == "exit")
			return (0);
		else
			std::cout<<"Enter avaliable command please\n>"<<std::endl;
	}
	return(0);
}
