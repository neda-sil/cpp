/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:08:35 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/17 17:18:08 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Public functions

void	Animal::makeSound(void) const
{
	std::cout << "..." << std::endl;
}

std::string	Animal::getType(void) const
{
	return _type;
}

//Constructors and destructors

Animal::Animal(void) : _type("")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	this->_type = other._type;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &other)
{
	if (this != &other)
		this->_type = other._type;
	std::cout << "Animal copy operator called" << std::endl;
	return *this;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}
