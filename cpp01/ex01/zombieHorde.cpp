/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 13:13:56 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/04 14:59:26 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*		zombieHorde(int n, std::string name)
{
	if (n < 0)
		return std::cout << "No negative hordes" << std::endl, static_cast<Zombie*>(NULL);
	Zombie*	horde = new Zombie[n];
	for (int i=0;i<n;i++)
		horde[i].zombie_name(name);
	return horde;
}

/*
	creer un tableau "horde" de type "Zombie" et alloue n "Zombie" dedans
	dans une boucle for, initalise tous les noms a "name"
	return un pointeur sur le premier "Zombie"
*/