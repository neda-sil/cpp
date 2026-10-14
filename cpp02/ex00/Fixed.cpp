/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 15:55:14 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/14 14:21:43 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return _fixed_int;
}

void	Fixed::setRawBits(int const raw)
{
	_fixed_int = raw;
}

//Constructor and Destructor parts

Fixed::Fixed(void) : _fixed_int(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &other) : _fixed_int(other.getRawBits())
{
	std::cout << "Copy constructor called\n";
}

Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignement operator called\n";
	if (this != &other)
		this->_fixed_int = other.getRawBits();
	return *this; //returning a reference to the current instance
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}
