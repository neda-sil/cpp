/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:09:41 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/17 17:19:21 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Public functions

void	Cat::makeSound(void) const
{
	std::cout << "miaou miaou" << std::endl;
}

std::string	Cat::getType(void) const
{
	return _type;
}

// Constructors and destructors

Cat::Cat(void) : Animal()
{
	_type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat copy called" << std::endl;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
		Animal::operator=(other);
	std::cout << "Cat copy operator called";
	return *this;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}
