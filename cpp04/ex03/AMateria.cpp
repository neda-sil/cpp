/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 22:50:04 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/23 23:20:07 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// Public functions

// - Getters

const std::string	&AMateria::getType(void) const
{
	return _type;
}

// - Other functions

AMateria	*AMateria::clone(void) const
{
	
}

void	AMateria::use(ICharacter &target)
{
	if (_type == "ice")
		std::cout << "* shoots an ice bolt to " << target.getName() << " *\n";
	if (_type == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

// Constructors and Destructors

AMateria::AMateria(const std::string &type) : _type(type)
{

}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	if (this != &other)
	{
		*this = other;
	}
	return *this;
}

AMateria::~AMateria()
{

}
