/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_AAnimal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:08:35 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/27 11:05:38 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

//Constructors and destructors

AAnimal::AAnimal(void) : _type("")
{
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) : _type(other._type)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &other)
{
	if (this != &other)
		this->_type = other._type;
	std::cout << "AAnimal copy operator called" << std::endl;
	return *this;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor called" << std::endl;
}
