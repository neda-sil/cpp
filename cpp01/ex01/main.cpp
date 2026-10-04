/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 13:13:14 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/01 13:59:17 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// make leaks pour executer le programme avec valgrind et tous les flags

#include "Zombie.hpp"

int	main(void)
{
	Zombie* horde;
	horde = zombieHorde(10, "jeff");
	for (int i=0;i<10;i++)
		horde[i].announce();
	delete[] horde;
}

/*
	creer une liste de zombies qui s'appellent "jeff" dans un tableau qui s'appelle horde
	les fait tous s'annoncer avec une boucle if
	"delete[]" fait detruire tous les elements du tableau
*/