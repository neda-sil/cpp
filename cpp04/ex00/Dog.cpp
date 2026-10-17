/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:09:25 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/17 17:17:31 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Public functions

void	Dog::makeSound(void) const
{
	std::cout << "wouf wouf" << std::endl;
}

std::string	Dog::getType(void) const
{
	return _type;
}

// Constructors and destructors

Dog::Dog(void) : Animal()
{
	_type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Dog copy called" << std::endl;
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
		Animal::operator=(other);
	std::cout << "Dog copy operator called";
	return *this;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}
