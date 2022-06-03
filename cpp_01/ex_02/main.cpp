/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:46:43 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/02 17:42:33 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"

int main(void){

	std::string str = "HI THIS IS BRAIN";

	std::string *stringPTR = & str;
	std::string &stringREF = str;

	std::cout<<"Adress STR: "<<&str<<std::endl;
	std::cout<<"String PTR: "<<stringPTR<<std::endl;
	std::cout<<"String REF: "<<&stringREF<<std::endl;

	std::cout<<"\nSTR: "<<str<<std::endl;
	std::cout<<"PTR: "<<*stringPTR<<std::endl;
	std::cout<<"REF: "<<stringREF<<std::endl;
	return (0);
}
