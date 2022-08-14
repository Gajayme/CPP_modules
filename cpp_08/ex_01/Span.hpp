/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 21:54:09 by lyubov            #+#    #+#             */
/*   Updated: 2022/08/14 13:51:14 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>

# define COLOR_DEFAULT "\033[0m"
# define COLOR_RED "\033[31m"
# define COLOR_GREEN "\033[32m"
# define COLOR_BLUE "\033[34m"
# define COLOR_MAGENTA "\033[35m"
# define COLOR_YELLOW "\033[33m"

class  Span
{
private:

//=====VARIABLES=====

	size_t maxVecSize_;
	size_t realVecSize_;
	std::vector<int> vec_;

public:

//=====CONSTRUCTORS=====

	Span(size_t size = 0);
	Span(const Span &other);
	~ Span();

//=====OPERATORS=====

	Span & operator=(const Span &other);

//=====METHODS=====

	void addNumber(int num);
	void addNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite);
	int shortestSpan();
	int longestSpan();
	size_t getMaxSize() const;
	size_t getRealSize() const;
	const std::vector<int> getVec() const;

//=====EXCEPTIONS=====

	class NotEnoughElements: public std::exception{
		virtual const char* what() const throw();
	};
	class MaximumElements: public std::exception{
		virtual const char* what() const throw();
	};
};

std::ostream & operator <<(std::ostream &out, const Span &a);

#endif
