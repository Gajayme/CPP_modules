/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gajayme <gajayme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:50:57 by gajayme           #+#    #+#             */
/*   Updated: 2022/08/06 14:21:50 by gajayme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


int main(void){

	std::cout<<COLOR_RED<<"===INT TEST===\n\n"<<COLOR_DEFAULT;
	int arri[] = {1, 2, 3, 4, 5, 6, 7};
	iter(arri, 7, &test);

	std::cout<<COLOR_RED<<"===CHAR TEST===\n\n"<<COLOR_DEFAULT;
	char arrc[] = {'a', 'b', 'c', 'd', 'e'};
	iter(arrc, 5, &test);


	std::cout<<COLOR_RED<<"\n===BUREUCRAT TEST===\n\n"<<COLOR_DEFAULT;
	Bureaucrat arrb[] = {Bureaucrat("bob", 10), Bureaucrat("ted", 5), Bureaucrat("alf", 15)};
	iter (arrb, 3, &test);


	return (0);
}