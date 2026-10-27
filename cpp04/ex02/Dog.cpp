/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:09:25 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/27 11:55:37 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Public functions

void	Dog::makeSound(void) const
{
	std::cout << "wouf wouf" << std::endl;
}

const std::string	Dog::getType(void) const
{
	return this->_type;
}

void	Dog::setThought(const std::string idea)
{
	_brain->setIdea(idea);
}

const std::string	Dog::getThought(unsigned int id) const
{
	return _brain->getIdea(id);
}

// Constructors and destructors

Dog::Dog(void) : AAnimal()
{
	_type = "Dog";
	_brain = new Brain;
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : AAnimal(other)
{
	_brain = new Brain((*other._brain));
	std::cout << "Dog copy called" << std::endl;
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		AAnimal::operator=(other);
		*_brain = *other._brain;
	}
	std::cout << "Dog copy operator called" << std::endl;
	return *this;
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << "Dog destructor called" << std::endl;
}
