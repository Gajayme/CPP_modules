/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 19:21:53 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/19 17:20:01 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void){

	Point a(1.0f, 1.0f);
	Point b(3.0f, 1.0f);
	Point c(2.0f, 3.0f);

	Point point(2.0f, 2.0f);
	bsp(a, b, c, point);

	Point point_1(4.0f, 5.0f);
	bsp(a, b, c, point_1);

	Point point_2(1.0f, 1.0f);
	bsp(a, b, c, point_2);

	return(0);
}
