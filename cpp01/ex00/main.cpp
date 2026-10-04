/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 15:29:38 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/01 13:59:23 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// make leaks pour executer le programme avec valgrind et tous les flags

#include "Zombie.hpp"

int	main(void)
{
	Zombie	mainZombie;
	mainZombie.zombie_name("mainZombie");
	mainZombie.announce();
	randomChump("randomChumpZombie");
	Zombie *nZombie = newZombie("newZombie");
	nZombie->announce();
	delete nZombie;
}

/*
	On peut voir que le zombie cree dans la fonction randomChump est detruit directement apres la fin de l'execution de la fonction
	celui cree dans le main est detruit automatique a la fin du main
	que celui cree dans newZombie est recuperable et manipulable du moment qu'on ne le detruit pas nous meme, il peut donc creer des leaks car le destructeur n'est pas appele automatiquement
*/
