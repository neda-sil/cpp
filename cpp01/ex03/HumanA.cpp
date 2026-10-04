/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:23:51 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/01 17:41:38 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout << _name << " attack with their " << _weapon->getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon)
{
	_name = name;
	_weapon = &weapon;
}

HumanA::~HumanA(void)
{
	
}
