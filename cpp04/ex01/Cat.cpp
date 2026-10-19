/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:09:41 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/18 14:10:48 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Public functions

void	Cat::makeSound(void) const
{
	std::cout << "miaou miaou" << std::endl;
}

// Constructors and destructors

Cat::Cat(void) : Animal()
{
	_type = "Cat";
	_brain = NULL;
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	*_brain = Brain((*other._brain));
	std::cout << "Cat copy called" << std::endl;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		*_brain = Brain((*other._brain));
	}
	std::cout << "Cat copy operator called" << std::endl;
	return *this;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}
