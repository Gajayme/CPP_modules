/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 11:48:38 by lyubov            #+#    #+#             */
/*   Updated: 2022/08/05 12:51:14 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Person.hpp"

#include <iostream>
#include <string>

# define COLOR_DEFAULT "\033[0m"
# define COLOR_RED "\033[31m"
# define COLOR_GREEN "\033[32m"
# define COLOR_BLUE "\033[34m"
# define COLOR_MAGENTA "\033[35m"
# define COLOR_YELLOW "\033[33m"

struct  Data
{
	std::string	word;
	int 		num;
};


uintptr_t serialize(Data* ptr){

	return (reinterpret_cast<uintptr_t>(ptr));
}


Data* deserialize(uintptr_t raw){

	return (reinterpret_cast<Data *>(raw));
}

int main(){

	Data *pd;
	uintptr_t ptr = 0;

	Data d;
	d.word = "word";
	d.num = 1;

	std::cout<<COLOR_MAGENTA<<"Content of d: "<<d.word<<" "<<d.num<<std::endl<<COLOR_DEFAULT;
	std::cout<<COLOR_GREEN<<"Original Data: "<<&d<<std::endl<<COLOR_DEFAULT;

	std::cout<<COLOR_BLUE<<"\nserealizind...\n"<<COLOR_DEFAULT;
	ptr = serialize(&d);
	std::cout<<"ptr = "<<ptr<<std::endl;
	std::cout<<COLOR_BLUE<<"deserealizind...\n\n"<<COLOR_DEFAULT;
	pd = deserialize(ptr);

	std::cout<<COLOR_GREEN<<"Deserealized:  "<<pd<<std::endl<<COLOR_BLUE;
	std::cout<<COLOR_MAGENTA<<"Content of pd: "<<pd->word<<" "<<pd->num<<std::endl<<COLOR_DEFAULT;


	return (0);
}
