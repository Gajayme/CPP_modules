/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gajayme <gajayme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:55:32 by gajayme           #+#    #+#             */
/*   Updated: 2022/08/08 13:40:38 by gajayme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>

# define COLOR_DEFAULT "\033[0m"
# define COLOR_RED "\033[31m"
# define COLOR_GREEN "\033[32m"
# define COLOR_BLUE "\033[34m"
# define COLOR_MAGENTA "\033[35m"
# define COLOR_YELLOW "\033[33m"

template <typename T>
int & easyfind(T &konteyner, int num){

	if (std::find(konteyner.begin(), konteyner.end(), num) != konteyner.end())
		return (*(std::find(konteyner.begin(), konteyner.end(), num)));
	else
		throw (std::overflow_error("Not found"));
}


#endif