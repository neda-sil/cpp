/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 17:18:50 by neda-sil          #+#    #+#             */
/*   Updated: 2026/09/29 12:05:12 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

//namespace pour toutes les verifications a faire apres un input
namespace	verifs
{
	//verifie le EOF (CTRL+D)
	void	verif_eof(void)
	{
		if (std::cin.eof())
		{
			std::cout << "EOF SHORTCUT ACTIVATED, GOODBYE" << std::endl;
			exit(1);
		}
	}
	//verifie que l'input soit bien un int (pour le choix de l'id dans SEARCH)
	void	verif_only_num(void)
	{
		std::cout << "INVALID CHARACTER" << std::endl;
		std::cin.clear();
		std::cin.ignore();
	}
};

/*
	prompt le message demande, et demande d'entrer une valeure selon ce qui est demande
	une ligne ne peut pas etre vide, donc boucle jusqu'a ce que la valeur ne le soit pas en verifiant avec "empty()" qui retourne true ou false
	"std::getline(std::cin, tmp)" sert a prendre en compte les espaces dans l'input
*/
static std::string	_set_param(std::string prompt)
{
	std::cout << prompt << std::endl;
	std::string	tmp;
	do
	{
		std::getline(std::cin, tmp);
		verifs::verif_eof();
		if (tmp.empty())
			std::cout << "CANNOT BE EMPTY!" << std::endl;
	} while (tmp.empty());
	return tmp;
}
//la fonction pour "ADD" qui donne un id + 1 pour eviter de rester sur 0
void	PhoneBook::_add(int id)
{
	contacts[id]._set_id(id + 1);
	std::cout << "NEW CONTACT :" << std::endl;
	contacts[id]._set_first_name(_set_param("FIRST NAME:"));
	contacts[id]._set_last_name(_set_param("LAST NAME:"));
	contacts[id]._set_nickname(_set_param("NICKNAME:"));
	contacts[id]._set_phone_number(_set_param("PHONE NUMBER:"));
	contacts[id]._set_darkest_secret(_set_param("DARKEST SECRET:"));
}

/*
	S'occupe de tout l'affichage de "SEARCH".
	"std::setw(int i)" s'occupe de formater la sortie en reservant au minimum 'i' caracteres qui sont des espaces si non occupe
	l'operation ternaire sert a verifier si la longueur de la variable est superieur aux 10 caracteres demandes
*/
static void	_print_elem(std::string first, std::string second, std::string third, std::string fourth)
{
	std::cout << std::left <<
	std::setw(10) << first << "|" <<
	std::setw(10) << (second.size() > 10 ? second.substr(0, 9) + "." : second) << "|" <<
	std::setw(10) << (third.size() > 10 ? third.substr(0, 9) + "." : third) << "|" <<
	std::setw(10) << (fourth.size() > 10 ? fourth.substr(0, 9) + "." : fourth) << std::endl;
}

/*
	Cette fonction s'occupe de gerer l'input de "SEARCH":
	"if (!(std::cin >> input))": verifier si l'input est bien un int, prompt "verif_only_num()" sinon
	verifie si l'input est un input valide
	sinon prompt les valeurs demande
*/
void	PhoneBook::_select(void)
{
	std::cout << "CHOOSE AN ID:" << std::endl;
	int	input;
	if (!(std::cin >> input))
		return (verifs::verif_only_num());
	if (input <= 0 || input > 8 || !contacts[input - 1]._get_id())
		std::cout << "ID DOES NOT EXIST" << std::endl;
	else
	{
		std::cout << "ID: " << contacts[input - 1]._get_id()<< std::endl;
		std::cout << "FIRST_NAME: " << contacts[input - 1]._get_first_name()<< std::endl;
		std::cout << "LAST NAME: " << contacts[input - 1]._get_last_name()<< std::endl;
		std::cout << "NICKNAME: " << contacts[input - 1]._get_nickname()<< std::endl;
		std::cout << "PHONE NUMBER: " << contacts[input - 1]._get_phone_number()<< std::endl;
		std::cout << "DARKEST SECRET: " << contacts[input - 1]._get_darkest_secret()<< std::endl;
	}
}

/*
	fonction pour l'input "SEARCH":
	verifie le nombre d'id disponible (sachant qu'un id invalide est egal a 0, d'ou le fait qu'on ne veuille pas de premier id en 0)
	"std::ostringstream	oss;
	oss << id;
	...(oss.str()...)" c'est tout simplement l'equivalent d'un "atoi()", explique dans le README associe
	si un prompt a ete fait, alors au moins un id est disponible pour "_select"
*/
void	PhoneBook::_search()
{
	_print_elem("ID", "FIRST_NAME", "LAST_NAME", "NICKNAME");
	int	i = 0;
	while (contacts[i]._get_id() != 0 && i <= 7)
	{
		std::ostringstream	oss;
		oss << i + 1;
		_print_elem(oss.str(),
			contacts[i]._get_first_name(),
			contacts[i]._get_last_name(),
			contacts[i]._get_nickname());
		i++;
	}
	if (i)
		_select();
}

//pas besoin de constructeur pour PhoneBook
PhoneBook::PhoneBook(void)
{
}

//pas besoin de destructeur pour PhoneBook
PhoneBook::~PhoneBook(void)
{
}

