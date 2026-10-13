/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:58:01 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/13 18:41:34 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Public functions

void	FragTrap::highFiveGuys(void)
{
	if (this->getHP() == 0)
		std::cout << this->getName() << " cannot high five anymore..." << std::endl;
	else
		std::cout << "Hey guys, let's High Five!!!" << std::endl;
}

// Constructors and Destructors

FragTrap::FragTrap(void)
{
	std::cout << "Empty FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(str name, int hp, int ener_pt, int att_damage) : ClapTrap(name, hp, ener_pt, att_damage)
{
	std::cout << "FragTrap " << name << " constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap &other) : ClapTrap(other.getName(), other.getHP(), other.getEnergyPoint(), other.getAttackDamage())
{
	std::cout << "Copy called for FragTrap " << this->getName() << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap &other)
{
	if (this != &other)
	{
		this->setName(other.getName());
		this->setHP(other.getHP());
		this->setEnergyPoint(other.getEnergyPoint());
		this->setAttackDamage(other.getAttackDamage());
	}
	std::cout << "Operator called for a " << this->getName() << " FragTrap copy" << std::endl;
	return *this;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->getName() << " destructor called" << std::endl;
}
