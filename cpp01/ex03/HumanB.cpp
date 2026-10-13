/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:23:18 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/13 11:57:37 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack()
{
	if (!_weapon)
	{
		std::cout << _name << " attacks with nothing" << std::endl;
		return ;
	}
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name) : _name(name)
{
	_weapon = NULL;
}

HumanB::~HumanB(void)
{
	
}
