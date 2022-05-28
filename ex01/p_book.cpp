/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_book.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:37:33 by lyubov            #+#    #+#             */
/*   Updated: 2022/05/28 19:05:44 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "P_book.hpp"

void PhoneBook::add(){

		std::string f_name;
		std::string l_name;
		std::string n_name;
		std::string p_numb;
		std::string d_secr;

		//get data from user (returning if he pass EOF)
		std::cout<<"Enter first name\n>";
		if (add_param(f_name))
			return ;

		std::cout<<"Enter last name\n>";
		if (add_param(l_name))
			return ;

		std::cout<<"Enter nickname\n>";
		if (add_param(n_name))
			return ;

		std::cout<<"Enter phone number\n>";
		if (add_param(p_numb))
			return ;

		std::cout << "Enter darkest secret\n>";
		if (add_param(d_secr))
			return ;

		//creating contact and incr. counters
		contacts[counter].add_data(f_name, l_name, n_name, p_numb, d_secr);
		contacts_amount = (contacts_amount == 8) ? 8 : contacts_amount + 1;
		counter = (counter == 7) ? 0 : counter + 1;
}

void PhoneBook::search(){

	//printing header of phone book
	std::cout<<std::right<<std::setw(10)<<"Index"<<"|"
	<<std::right<<std::setw(10)<<"First name"<<"|"
	<<std::right<<std::setw(10)<<"Last Name"<<"|"
	<<std::right<<std::setw(10)<<"Nickname"<<"|"<<std::endl;

	//printing content of phonebook in short
	for (int i = 0; i != contacts_amount; ++i){

		std::cout<<std::right<<std::setw(10)<<i + 1<<"|";
		if (contacts[i].first_name.length() > 10)
			search_print(contacts[i].first_name);
		else
			std::cout<<std::right<<std::setw(10)<<contacts[i].first_name<<"|";
		if (contacts[i].last_name.length() > 10)
			search_print(contacts[i].last_name);
		else
			std::cout<<std::right<<std::setw(10)<<contacts[i].last_name<<"|";
		if (contacts[i].nickname.length() > 10)
			search_print(contacts[i].nickname);
		else
			std::cout<<std::right<<std::setw(10)<<contacts[i].nickname<<"|";
		std::cout<<std::endl;
	}
	//all concrete contact info
	search_get_contact();
}

//print short info of all contacts
void PhoneBook::search_print(std::string to_print){

	for (int i = 0; i < 9; ++i){
		std::cout<<to_print[i];
	}
	std::cout<<".|";
}

//print all contact info
void PhoneBook::search_get_contact(){
	std::string	idx_string;
	int			idx_int;

	std::cout<<"Enter idx\n>";
	std::getline(std::cin, idx_string);
	idx_int = std::atoi(idx_string.c_str());
	if (idx_int > 0 && idx_int <= contacts_amount)
		contacts[idx_int - 1].print_contact();
	else
		std::cout<<"Invalid input\n>";
}

//adding contact
int PhoneBook::add_param(std::string &param){
	std::getline(std::cin, param);
	if (std::cin.eof())
		std::exit(0);
	else if (param.size() == 0)
		return (1);
	return (0);
}
