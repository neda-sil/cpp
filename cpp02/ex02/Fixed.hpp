/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 15:55:08 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/09 13:16:17 by neda-sil         ###   ########.fr       */
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
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;

		bool				operator>(const Fixed &other) const;
		bool				operator<(const Fixed &other) const;
		bool				operator>=(const Fixed &other) const;
		bool				operator<=(const Fixed &other) const;
		bool				operator==(const Fixed &other) const;
		bool				operator!=(const Fixed &other) const;

		Fixed				&operator=(const Fixed &other);
		Fixed				operator+(const Fixed &other) const;
		Fixed				operator-(const Fixed &other) const;
		Fixed				operator*(const Fixed &other) const;
		Fixed				operator/(const Fixed &other) const;

		Fixed				&operator++(void);
		Fixed				operator++(int value);
		Fixed				&operator--(void);
		Fixed				operator--(int value);

		static const Fixed	&max(const Fixed &a, const Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed		&min(Fixed &a, Fixed &b);

		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &copy);
		~Fixed();
};

std::ostream	&operator<<(std::ostream &os, const Fixed &value);

#endif