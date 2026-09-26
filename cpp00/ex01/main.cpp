/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 17:18:20 by neda-sil          #+#    #+#             */
/*   Updated: 2026/09/25 23:09:25 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

//pour mettre l'input en majuscule
static std::string	upper_input(std::string input, size_t size)
{
	size_t	i = -1;

	while (++i < size)
		input[i] = std::toupper(static_cast<unsigned char>(input[i]));
	return input;
}

/*
	fonction main qui boucle tant que l'input n'est pas egal a "EXIT"
	"input = upper_input(input, input.size());": pour s'assurer que l'input soit en majuscule
	si l'input est egal a "ADD", alors on verifie que l'id ne soit pas superieur au dernier disponible, le remet a 0 sinon
	si l'input est egal a "SEARCH", alors on lance la fonction "_search"
*/
int	main(void)
{
	PhoneBook	pb;

	std::string	input;
	std::cout << "WELCOME TO YOUR PHONEBOOK!" << std::endl;
	int	id = 0;
	do
	{
		std::cout << ">> ";
		std::cin >> input;
		verifs::verif_eof();
		input = upper_input(input, input.size());
		std::cin.ignore();
		if (input == "ADD")
		{
			if (id >= 8)
				id = 0;
			pb._add(id);
			id++;
		}
		else if (input == "SEARCH")
			pb._search();
	} while (input != "EXIT");
	return 0;
}
