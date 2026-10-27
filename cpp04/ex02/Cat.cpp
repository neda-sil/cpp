/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:09:41 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/27 11:54:02 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Public functions

void	Cat::makeSound(void) const
{
	std::cout << "miaou miaou" << std::endl;
}

const std::string	Cat::getType(void) const
{
	return this->_type;
}

void	Cat::setThought(const std::string idea)
{
	_brain->setIdea(idea);
}

const std::string	Cat::getThought(unsigned int id) const
{
	return _brain->getIdea(id);
}

// Constructors and destructors

Cat::Cat(void) : AAnimal()
{
	_type = "Cat";
	_brain = new Brain;
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : AAnimal(other)
{
	_brain = new Brain((*other._brain));
	std::cout << "Cat copy called" << std::endl;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		AAnimal::operator=(other);
		*_brain = *other._brain;
	}
	std::cout << "Cat copy operator called" << std::endl;
	return *this;
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}
