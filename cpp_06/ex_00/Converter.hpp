/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 11:53:32 by lyubov            #+#    #+#             */
/*   Updated: 2022/08/08 14:38:20 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <climits>
#include <limits>
#include <cmath>

# define COLOR_DEFAULT "\033[0m"
# define COLOR_RED "\033[31m"
# define COLOR_GREEN "\033[32m"
# define COLOR_BLUE "\033[34m"
# define COLOR_MAGENTA "\033[35m"
# define COLOR_YELLOW "\033[33m"

enum VALUES
{
	CHAR_VAL,
	INT_VAL,
	DOUBLE_VAL,
	FLOAT_VAL,
	INVALID_VAL

};

class Converter
{
private:
	std::string orig_str_;
	int		prec_;
	int		spec_d_;
	bool	is_pos_;


	char	c_;
	long	i_;
	float	f_;
	double	d_;

public:

//==========Constructors==========
	Converter(std::string orig_str);
	Converter(const Converter & other);
	~Converter();

//==========Operators==========
	Converter & operator=(const Converter & other);
	friend std::ostream & operator<<(std::ostream &out, const Converter &a);
//==========Exeptions==========

	class InvalidValue: public std::exception{
		virtual const char *what() const throw();
	};

//==========Methods==========

	int FindOrigType();
	void Convert();
};

#endif
