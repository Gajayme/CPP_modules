/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:04:26 by lyubov            #+#    #+#             */
/*   Updated: 2022/05/28 19:03:23 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::add_data(std::string f_name, std::string l_name
	, std::string n_name, std::string p_numb, std::string d_secr){

	first_name = f_name;
	last_name = l_name;
	nickname = n_name;
	phone_number = p_numb;
	darckest_secret = d_secr;
}

void Contact::print_contact(){

	//Printing contact's info
	std::cout<<first_name<<std::endl;
	std::cout<<last_name<<std::endl;
	std::cout<<nickname<<std::endl;
	std::cout<<phone_number<<std::endl;
	std::cout<<darckest_secret<<std::endl;

}
