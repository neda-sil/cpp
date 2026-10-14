/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:09:45 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/14 16:12:26 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Get private values functions

str	ClapTrap::getName(void) const
{
	return _name;
}

unsigned int	ClapTrap::getHP(void) const
{
	return _hit_point;
}

unsigned int	ClapTrap::getEnergyPoint(void) const
{
	return _energy_point;
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return _attack_damage;
}

// Set private values

void	ClapTrap::setName(const str name)
{
	_name = name;
}

void	ClapTrap::setHP(const unsigned int amount)
{
	_hit_point = amount;
}

void	ClapTrap::setEnergyPoint(const unsigned int amount)
{
	_energy_point = amount;
}

void	ClapTrap::setAttackDamage(const unsigned int amount)
{
	_attack_damage = amount;
}

// Public functions

void	ClapTrap::attack(const str &target)
{
	if (!_energy_point)
	{
		std::cout << "ClapTrap " << _name << " has no energy points left" << std::endl;
		return ;
	}
	else if (!_hit_point)
	{
		std::cout << "ClapTrap " << _name << " has no hp left" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
	_energy_point--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!_hit_point)
	{
		std::cout << "Claptrap " << _name << " is already dead..." << std::endl;
		return ;
	}
	if (amount > _hit_point)
		_hit_point = 0;
	else
		_hit_point -= amount;
	std::cout << "ClapTrap " << _name << " takes " << amount << " damages! It have " << _hit_point << "hp left" << std::endl;
	if (!_hit_point)
		std::cout << "ClapTrap " << _name << " died!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!_energy_point)
	{
		std::cout << "ClapTrap " << _name << " has no energy points left" << std::endl;
		return ;
	}
	else if (!_hit_point)
	{
		std::cout << "ClapTrap " << _name << " has no hp left" << std::endl;
		return ;
	}
	else if (amount < std::numeric_limits<unsigned int>::max() - _hit_point)
	{
		_hit_point = std::numeric_limits<unsigned int>::max();
		std::cout << "ClapTrap " << _name << " repaire " << std::numeric_limits<unsigned int>::max() << "hp! It has " << _hit_point << "hp left" << std::endl;
	}
	else
	{
		_hit_point += amount;
		_energy_point--;
		std::cout << "ClapTrap " << _name << " repaire " << amount << "hp! It has " << _hit_point << "hp left" << std::endl;
	}
}

// Constructor and Destructor

ClapTrap::ClapTrap(void) : _name(""), _hit_point(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "Empty ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(str name) : _name(name), _hit_point(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
	std::cout << "\nClapTrap " << _name << " infos:\nhp: " << _hit_point << "\nenergy point: " << _energy_point << "\nattack damage: " << _attack_damage << "\n\n";
}

ClapTrap::ClapTrap(const ClapTrap &other) : _name(other.getName()), _hit_point(other.getHP()), _energy_point(other.getEnergyPoint()), _attack_damage(other.getAttackDamage())
{
	std::cout << "Copy called for " << this->_name << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		this->_name = other.getName();
		this->_hit_point = other.getHP();
		this->_energy_point = other.getEnergyPoint();
		this->_attack_damage = other.getAttackDamage();
	}
	std::cout << "Operator called for a " << this->_name << " copy" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << _name << " destructor called" << std::endl;
}
