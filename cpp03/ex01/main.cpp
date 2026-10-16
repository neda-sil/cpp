/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:09:47 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/16 21:39:27 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	romeo("Romeo");

	romeo.attack("Benjamin");
	romeo.attack("Benjamin");
	romeo.attack("Benjamin");
	romeo.attack("Benjamin");
	romeo.attack("Benjamin");
	std::cout << "\n";
	ScavTrap	b;
	b = romeo;
	std::cout << "\n";
	romeo.beRepaired(1);
	romeo.beRepaired(1);
	romeo.beRepaired(std::numeric_limits<unsigned int>::max());
	romeo.beRepaired(1);
	romeo.beRepaired(1);
	std::cout << "\n";
	romeo.attack("Benjamin");
	romeo.beRepaired(1);
	std::cout << "\n";
	romeo.takeDamage(1);
	romeo.takeDamage(1);
	romeo.takeDamage(1);
	romeo.takeDamage(1);
	romeo.takeDamage(1);
	std::cout << "\n";
	romeo.takeDamage(std::numeric_limits<unsigned int>::max());
	std::cout << "\n";
	romeo.takeDamage(100);
	std::cout << "\n";
}
