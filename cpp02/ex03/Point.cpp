/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 13:45:11 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/28 19:01:57 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Public functions

const Fixed	Point::getX(void) const
{
	return _x;
}

const Fixed	Point::getY(void) const
{
	return _y;
}

// Constructors and destructors

Point::Point(void) : _x(0), _y(0)
{
	std::cout << "Empty Point constructor called\n";
}

Point::Point(const Fixed &x, const Fixed &y) : _x(x), _y(y)
{
	std::cout << "Point constructor called with x = " << _x << " and y = " << _y << "\n";
}

Point::Point(const Point &other) : _x(other._x), _y(other._y)
{
	std::cout << "Point copy constructor called\n";
}

Point	&Point::operator=(const Point &other)
{
	if (this != &other)
		Point(other._x, other._y);
	return *this;
}

Point::~Point(void)
{
	std::cout << "Point destructor called\n";
}
