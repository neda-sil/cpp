/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 19:09:06 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/16 21:53:38 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Public functions

void	ScavTrap::attack(const std::string &target)
{
	if (!_hit_point)
	{
		std::cout << "ScavTrap " << _name << " has no hp left" << std::endl;
		return ;
	}
	else if (!_energy_point)
	{
		std::cout << "ScavTrap " << _name << " has no energy points left" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
	_energy_point--;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}

// Constructors and destructors

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << _name << " constructor called\n";
	_hit_point = 100;
	_energy_point = 50;
	_attack_damage = 20;
	std::cout << "\nScavTrap " << _name << " infos:\nhp: " << _hit_point << "\nenergy point: " << _energy_point << "\nattack damage: " << _attack_damage << "\n\n";
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "Operator called for a " << _name << " ScavTrap copy" << std::endl;
	return *this;
}

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "Empty ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << _name << " destructor called" << std::endl; 
}
