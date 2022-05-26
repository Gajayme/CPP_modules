/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 00:00:09 by lyubov            #+#    #+#             */
/*   Updated: 2022/05/26 23:52:00 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_book.hpp"

int main(void)
{
	PhoneBook	phonebook;
	std::string	user_input;

	while (1)
	{
		std::cin>>user_input;
		if (user_input == "ADD")
			phonebook.add();
		else if (user_input == "SEARCH")
			phonebook.search();
		else if (user_input == "EXIT")
			return (0);
		else
			std::cout<<"Enter avaliable command please"<<std::endl;
	}
	return(0);
}
