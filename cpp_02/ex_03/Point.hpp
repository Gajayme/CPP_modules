/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:41:54 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/19 12:49:49 by lyubov           ###   ########.fr       */
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

	const Fixed &get_x() const;
	const Fixed &get_y() const ;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

bool operator ==(const Point &a, const Point &b);


#endif

