/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 13:45:05 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/28 19:35:49 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(const Point &A, const Point &B, const Point &C, const Point &pnt)
{
	Fixed	a, b, c;

	a = (B.getY() - A.getY()) * -1;
	b = (B.getX() - A.getX());
	c = (a * A.getX() + b * A.getY()) * -1;
	Fixed	d1(a * pnt.getX() + b * pnt.getY() + c);
	std::cout << "a : " << a << "\nb : " << b << "\nc : " << c << "\nd1 : " << d1 << "\n";
	
	a = (A.getY() - C.getY()) * -1;
	b = (A.getX() - C.getX());
	c = (a * A.getX() + b * A.getY()) * -1;
	Fixed	d2(a * pnt.getX() + b * pnt.getY() + c);
	std::cout << "\na : " << a << "\nb : " << b << "\nc : " << c << "\nd2 : " << d2 << "\n";
	
	a = (C.getY() - B.getY()) * -1;
	b = (C.getX() - B.getX());
	c = (a * B.getX() + b * B.getY()) * -1;
	Fixed	d3(a * pnt.getX() + b * pnt.getY() + c);
	std::cout << "\na : " << a << "\nb : " << b << "\nc : " << c << "\nd3 : " << d3 << "\n";

	if ()
	return true;
}
