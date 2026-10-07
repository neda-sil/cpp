/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 15:55:14 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/07 22:29:58 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Other functions

std::ostream	&operator<<(std::ostream &os, const Fixed &value)
{
	os << value.toFloat();
	return os;
}

//Fixed class functions

int	Fixed::getRawBits(void) const
{
	return _fixed_int;
}

void	Fixed::setRawBits(int const raw)
{
	_fixed_int = raw;
}

float	Fixed::toFloat(void) const
{
	return static_cast<float>(_fixed_int) / (1 << _fractionalBits);
}

int	Fixed::toInt(void) const
{
	return _fixed_int >> _fractionalBits;
}

//Constructors and Destructors parts

Fixed::Fixed(void)
{
	std::cout << "Default constructor called\n";
	_fixed_int = 0;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	_fixed_int = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	_fixed_int = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called\n";
	_fixed_int = other.getRawBits();
}

Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignement operator called\n";
	if (this != &other) //avoid self assignement
		this->_fixed_int = other.getRawBits();
	return *this; //returning a reference to the current instance
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}
