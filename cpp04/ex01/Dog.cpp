/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:09:25 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/21 17:25:02 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Public functions

void	Dog::makeSound(void) const
{
	std::cout << "wouf wouf" << std::endl;
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

Dog::Dog(void) : Animal()
{
	_type = "Dog";
	_brain = new Brain;
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	*_brain = *other._brain;
	std::cout << "Dog copy called" << std::endl;
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
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
