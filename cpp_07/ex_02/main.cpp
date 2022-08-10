/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 20:07:06 by gajayme           #+#    #+#             */
/*   Updated: 2022/08/10 20:21:44 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstdlib>

template <typename T>
void fill_arr(Array<T> &arr){

	for (size_t i = 0; i != arr.size(); ++i){
		arr[i] = rand()%10;
	}

}

template <typename T>
void print_arr(Array<T> &arr){

	for (size_t i = 0; i != arr.size(); ++i){
		std::cout<<arr[i]<<" ";
	}
	std::cout<<std::endl;
}

int main(void){

	srand(time(0));

	Array<int> a1(10);

	fill_arr(a1);
	Array<int>a2(a1);
	print_arr(a1);
	print_arr(a2);


	Array<Dollars> a3(5);

	std::cout<<"Valid: "<<a3[1].get_dollars()<<std::endl;

	try{
		std::cout<<a3[10].get_dollars()<<std::endl;
	}
	catch(std::exception &e){
		std::cerr<<COLOR_RED<<e.what()<<std::endl<<COLOR_DEFAULT;
	}

	return (0);
}
