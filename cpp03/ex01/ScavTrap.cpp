/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:03:35 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/13 18:42:51 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Public functions

bool	ScavTrap::getGGStatus(void)
{
	return _guardGate;
}

void	ScavTrap::guardGate(void)
{
	if (this->getHP() == 0)
		std::cout << this->getName() << " cannot block, he is dead..." << std::endl;
	else if (_guardGate)
		std::cout << this->getName() << "'s guard keeper mode is already activated" << std::endl;
	else
	{
		std::cout << this->getName() << "'s guard keeper mode activated" << std::endl;
		_guardGate = true;
	}
}

// Constructors and Destructors

ScavTrap::ScavTrap(void)
{
	std::cout << "Empty ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(str name, unsigned int hp, unsigned int ener_pt, unsigned int att_damage) : ClapTrap(name, hp, ener_pt, att_damage)
{
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &other) : ClapTrap(other.getName(), other.getHP(), other.getEnergyPoint(), other.getAttackDamage())
{
	std::cout << "Copy called for ScavTrap " << this->getName() << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap &other)
{
	if (this != &other)
	{
		this->setName(other.getName());
		this->setHP(other.getHP());
		this->setEnergyPoint(other.getEnergyPoint());
		this->setAttackDamage(other.getAttackDamage());
	}
	std::cout << "Operator called for a " << this->getName() << " ScavTrap copy" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->getName() << " destructor called" << std::endl;
}