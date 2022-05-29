/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:18:18 by lyubov            #+#    #+#             */
/*   Updated: 2022/05/25 18:17:47 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char *av[])
{
	std::string no_args = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::string cur_str;

	if (ac == 1)
		std::cout<<no_args;
	else{
		for (int i = 1; i < ac; ++i){
			cur_str = av[i];
			int len = cur_str.length();
			for (int j = 0; j < len; ++j){
				std::cout<<(char)toupper(cur_str[j]);
			}
			std::cout<<" ";
	}
	}
	std::cout<<std::endl;
	return (0);
}
