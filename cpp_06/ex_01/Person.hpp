/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 11:25:05 by lyubov            #+#    #+#             */
/*   Updated: 2022/08/05 11:38:14 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERSON_HPP
# define PERSON_HPP

#include <iostream>
#include <string>

# define COLOR_DEFAULT "\033[0m"
# define COLOR_RED "\033[31m"
# define COLOR_GREEN "\033[32m"
# define COLOR_BLUE "\033[34m"
# define COLOR_MAGENTA "\033[35m"
# define COLOR_YELLOW "\033[33m"

struct Person
{

	int			age_;
	std::string	name_;
	std::string	occupation_;

	//==========Constructors==========
	Person(int age, std::string name, std::string occupation);
	Person(const Person &other);
	~Person();

	//==========Operators==========
	Person & operator=(const Person &other);
	friend std::ostream & operator<<(std::ostream &out, const Person &a);

};

#endif
