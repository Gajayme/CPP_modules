/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_book.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:37:33 by lyubov            #+#    #+#             */
/*   Updated: 2022/05/26 23:47:25 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_book.hpp"

void PhoneBook::add()
{
		std::string f_name;
		std::string l_name;
		std::string n_name;
		std::string p_numb;
		std::string d_secr;

		std::cout<<"Enter first_name: ";
		std::cin>>f_name;
		if(std::cin.eof())
			return ;

		std::cout<<"Enter last_name: ";
		std::cin>>l_name;
		if(std::cin.eof())
			return ;

		std::cout<<"Enter nickname: ";
		std::cin>>n_name;
		if(std::cin.eof())
			return ;

		std::cout<<"Enter phone_number: ";
		std::cin>>p_numb;
		if(std::cin.eof())
			return ;

		std::cout<<"Enter darckest_secret: ";
		std::cin>>d_secr;
		if(std::cin.eof())
			return ;

		contacts[counter].add_data(f_name, l_name, n_name, p_numb, d_secr);
		contacts_amount = (contacts_amount == 8) ? 8 : contacts_amount + 1;
		counter = (counter == 7) ? 0 : counter + 1;
}

void PhoneBook::search()
{
	for (int i = 0; i != contacts_amount; ++i){
		std::cout<<i + 1<<" ";
		std::cout<<contacts[i].first_name<<" ";
		std::cout<<contacts[i].last_name<<" ";
		std::cout<<contacts[i].nickname<<" ";
		std::cout<<contacts[i].phone_number<<" ";
		std::cout<<contacts[i].darckest_secret<<" ";
		std::cout<<std::endl;
	}
}
