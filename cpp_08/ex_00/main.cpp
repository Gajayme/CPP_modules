/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:55:21 by gajayme           #+#    #+#             */
/*   Updated: 2022/08/14 11:04:21 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
void printer(const T &knt){

	for(typename T::const_iterator it = knt.begin(); it != knt.end(); ++it)
		std::cout<<COLOR_MAGENTA<<*it<<" ";
	std::cout<<std::endl<<COLOR_DEFAULT;
}

template <typename T>
void exec(int to_find, T &konteyner, std::string k_type){
	std::cout<<COLOR_BLUE<<"Looking for "<<to_find<<" in "<<k_type<<std::endl<<COLOR_DEFAULT;
	try{
		typename T::iterator it = easyfind(konteyner, to_find);
		*it = 999;
		printer(konteyner);
	}
	catch(std::exception &e){
		std::cout<<e.what()<<std::endl;
	}
}


int main(void){

	std::vector<int> vec;
	std::list<int> lst;

	vec.push_back(0);
	lst.push_back(0);
	for (int i = 0; i != 10; ++i){
		vec.push_back(i);
		lst.push_back(i);
	}




	std::cout<<"\n==BEFORE TESTS===\n\n";
	std::cout<<"vec = ";
	printer(vec);
	std::cout<<"lst = ";
	printer(lst);

	std::cout<<"\n==STARTING TESTS===\n\n";
	std::cout<<std::endl;

	exec(0, vec, "vec");
	exec(0, vec, "vec");
	exec(9, vec, "vec");
	exec(-1, vec, "vec");
	exec(10, vec, "vec");

	std::cout<<std::endl;

	exec(0, lst, "lst");
	exec(0, lst, "lst");
	exec(9, lst, "lst");
	exec(-1, lst, "lst");
	exec(10, lst, "lst");

	return (0);
}
