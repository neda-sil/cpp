/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:03:35 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/13 17:40:11 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Public functions

bool	ScavTrap::getGGStatus()
{
	return _guardGate;
}

void	ScavTrap::guardGate()
{
	if (_guardGate)
		std::cout << this->getName() << "'s guard keeper mode is already activated" << std::endl;
	else
	{
		std::cout << this->getName() << "'s guard keeper mode activated" << std::endl;
		_guardGate = true;
	}
}

// Constructors and Destructors

ScavTrap::ScavTrap()
{
	std::cout << "Empty ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(str name, unsigned int hp, unsigned int ener_pt, unsigned int att_damage) : ClapTrap(name, hp, ener_pt, att_damage)
{
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->getName() << " destructor called" << std::endl;
}