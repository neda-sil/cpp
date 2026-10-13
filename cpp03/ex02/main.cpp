/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:09:47 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/13 18:40:40 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	romeo("Romeo", 10, 10, 0);

	romeo.attack("Benjamin");
	romeo.attack("Benjamin");
	romeo.attack("Benjamin");
	romeo.attack("Benjamin");
	romeo.attack("Benjamin");
	std::cout << "\n";
	romeo.beRepaired(1);
	romeo.beRepaired(1);
	romeo.beRepaired(1);
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
	romeo.takeDamage(100);
	std::cout << "\n";
	romeo.takeDamage(100);
	std::cout << "\n";

	std::cout << "EX01 TESTS\n";
	std::cout << "\n";
	ScavTrap	juliette("Juliette", 100, 50, 20);
	for (int i=0;i<45;i++)
		juliette.attack("Romeo");
	std::cout << "\n";
	juliette.guardGate();
	std::cout << "\n";
	juliette.beRepaired(1);
	juliette.beRepaired(1);
	juliette.beRepaired(1);
	juliette.beRepaired(1);
	juliette.beRepaired(1);
	std::cout << "\n";
	juliette.attack("Romeo");
	juliette.beRepaired(1);
	std::cout << "\n";
	juliette.guardGate();
	std::cout << "\n";
	juliette.takeDamage(20);
	juliette.takeDamage(20);
	juliette.takeDamage(20);
	juliette.takeDamage(20);
	juliette.takeDamage(20);
	juliette.takeDamage(20);
	std::cout << "\n";
	std::cout << "EX02 TESTS" << std::endl;
	std::cout << "\n";
	FragTrap	joao("Joao", 100, 100, 30);
	std::cout << "\n";
	joao.attack("Juliette");
	std::cout << "\n";
	joao.highFiveGuys();
	std::cout << "\n";
	joao.beRepaired(1);
	std::cout << "\n";
	joao.takeDamage(1000);
	std::cout << "\n";
	joao.highFiveGuys();
	std::cout << "\n";
	std::cout << "\n";
}
