/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:41:59 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/19 17:45:14 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Fixed find_sign(Point const line_p1, Point const line_p2, Point const point){

	Fixed res;

	res = (line_p1.get_x() - point.get_x()) * (line_p2.get_y() - line_p1.get_y())
		- (line_p2.get_x() - line_p1.get_x()) * (line_p1.get_y() - point.get_y());
	return (res);
}

bool bsp(Point const a, Point const b, Point const c, Point const point){

	if ((a.get_x() == b.get_x() && a.get_x() == c.get_x()) || (a.get_y() == b.get_y()
			&& a.get_y() == c.get_y()) || (a == point || b == point || c == point)){
		std::cout<<"It's outside\n";
		return (false);
		}
	Fixed sign_1 = find_sign(a, b, point);
	Fixed sign_2 = find_sign(b, c, point);
	Fixed sign_3 = find_sign(c, a, point);

	if ((sign_1 > 0 && sign_2 > 0 && sign_3 > 0)
		|| (sign_1 < 0 && sign_2 < 0 && sign_3 < 0)){
			std::cout<<"It's in\n";
			return (true);
		}
	std::cout<<"It's outside\n";
	return (false);
}

