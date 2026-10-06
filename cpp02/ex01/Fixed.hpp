/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 15:55:08 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/06 17:59:38 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int					*_fixed_int;
		static const int	_fractionalBits = 8;
		
		public:
		int		getRawBits(void) const;
		void	settRawBits(int const raw);
		float	toFloat(void);
		int		toInt(void);
		
		Fixed();
		Fixed(const int value);
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &other);
		~Fixed();
};

#endif