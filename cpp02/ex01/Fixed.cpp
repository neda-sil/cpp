/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 15:55:14 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/06 17:59:28 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return *_fixed_int;
}

void	Fixed::settRawBits(int const raw)
{
	*_fixed_int = raw;
}

float	Fixed::toFloat(void)
{

}

int	Fixed::toInt(void)
{

}

//Constructors and Destructors parts

Fixed::Fixed(void)
{
	std::cout << "Default constructor called\n";
	_fixed_int = new int(0); //heap memory allocation
}

Fixed::Fixed(const int value)
{
	_fixed_int = new int(value);
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called\n";
	_fixed_int = new int(other.getRawBits()); //deep copy
}

Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignement operator called\n";
	if (this != &other) //avoid self assignement
	{
		delete _fixed_int; //clean up old memory
		this->_fixed_int = new int(other.getRawBits()); //deep copy
	}
	return *this; //returning a pointer to the current instance
}

Fixed	&operator<<(const float &value)
{
	
}

Fixed::~Fixed(void)
{
	delete _fixed_int; //cleaning up the stack
	std::cout << "Destructor called" << std::endl;
}
