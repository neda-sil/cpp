/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 15:55:08 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/09 01:29:56 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int					_fixed_int;
		static const int	_fractionalBits = 8;

		public:
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		Fixed	&operator=(const Fixed &other);
		Fixed	&operator+(const Fixed &other);
		Fixed	&operator-(const Fixed &other);
		Fixed	&operator*(const Fixed &other);
		Fixed	&operator/(const Fixed &other);

		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &copy);
		~Fixed();
};

std::ostream	&operator<<(std::ostream &os, const Fixed &value);

#endif