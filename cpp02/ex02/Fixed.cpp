/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 15:55:14 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/11 15:51:08 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Operators functions

std::ostream	&operator<<(std::ostream &os, const Fixed &value)
{
	os << value.toFloat();
	return os;
}

//Comparison operators

bool				Fixed::operator>(const Fixed &other) const
{
	return this->getRawBits() > other.getRawBits();
}

bool				Fixed::operator<(const Fixed &other) const
{
	return this->getRawBits() < other.getRawBits();
}

bool				Fixed::operator>=(const Fixed &other) const
{
	return this->getRawBits() >= other.getRawBits();
}

bool				Fixed::operator<=(const Fixed &other) const
{
	return this->getRawBits() <= other.getRawBits();
}

bool				Fixed::operator==(const Fixed &other) const
{
	return this->getRawBits() == other.getRawBits();
}

bool				Fixed::operator!=(const Fixed &other) const
{
	return this->getRawBits() != other.getRawBits();
}

//Arithmetic operators

Fixed	&Fixed::operator=(const Fixed &other)
{
	if (this != &other) //avoid self assignement
		this->_fixed_int = other.getRawBits();
	return *this; //returning a reference to the current instance
}

Fixed	Fixed::operator+(const Fixed &other) const
{
	Fixed	result;

	result.setRawBits(this->getRawBits() + other.getRawBits());
	return result;
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	Fixed	result;

	result.setRawBits(this->getRawBits() - other.getRawBits());
	return result;
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	Fixed	result;

	result.setRawBits(roundf(this->getRawBits() * other.toFloat()));
	return result;
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	Fixed	result;

	if (other.toFloat() == 0)
	{
		std::cerr << "Dividing by 0 is impossible, returning 0\n";
		return result;
	}
	result.setRawBits(roundf(this->getRawBits() / other.toFloat()));
	return result;
}

// Increment/decrement operators

Fixed	&Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

Fixed	Fixed::operator++(int value)
{
	static_cast<void>(value);
	Fixed	result;

	result.setRawBits(this->getRawBits());
	this->setRawBits(this->getRawBits() + 1);
	return result;
}

Fixed	&Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

Fixed	Fixed::operator--(int value)
{
	static_cast<void>(value);
	Fixed	result;

	result.setRawBits(this->getRawBits());
	this->setRawBits(this->getRawBits() - 1);
	return result;
}

//Static comparison functions

Fixed const	&Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a.getRawBits() > b.getRawBits()) ? a : b;
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return (a.getRawBits() > b.getRawBits()) ? a : b;
}

Fixed const	&Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a.getRawBits() < b.getRawBits()) ? a : b;
}

Fixed		&Fixed::min(Fixed &a, Fixed &b)
{
	return (a.getRawBits() < b.getRawBits()) ? a : b;
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
	_fixed_int = 0;
}

Fixed::Fixed(const int value)
{
	_fixed_int = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
	_fixed_int = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &other)
{
	_fixed_int = other.getRawBits();
	// std::cout << "CONSTRUCTOR CALLED\n";
}

Fixed::~Fixed(void)
{
	// std::cout << "DESTRUCTOR CALLED\n";
}
