/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 13:46:58 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/17 14:28:19 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Public functions

void	FragTrap::highFiveGuys(void)
{
	if (!_hit_point)
		std::cout << "FragTrap " << _name << " cannot high five anymore..." << std::endl;
	else
		std::cout << "Let's high five guys!!" << std::endl;
}

// Constructors and destructors

FragTrap::FragTrap(void) : ClapTrap()
{
	_hit_point = 100;
	_energy_point = 100;
	_attack_damage = 30;
	std::cout << "Empty FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	_hit_point = 100;
	_energy_point = 100;
	_attack_damage = 30;
	std::cout << "FragTrap " << name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	return *this;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}
