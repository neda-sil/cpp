/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 13:45:13 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/28 19:15:11 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point
{
	private:
		const Fixed	_x;
		const Fixed	_y;

	public:
		const Fixed	getX(void) const;
		const Fixed	getY(void) const;

		Point(void);
		Point(const Fixed &x, const Fixed &y);
		Point(const Point &other);
		Point	&operator=(const Point &other);
		~Point(void);
};

#endif