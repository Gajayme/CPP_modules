/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:41:54 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/18 18:13:35 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	Fixed const x;
	Fixed const y;
public:

	Point();
	Point(float const x, float const y);
	Point(Point const & a);
	Point & operator =(Point const & a);
	~Point();
};

#endif

