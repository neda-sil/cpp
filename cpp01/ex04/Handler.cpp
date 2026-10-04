/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Handler.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 13:17:35 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/02 13:57:22 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Handler.hpp"

Handler::Handler(str filename, str s1, str s2) : _filename(filename), _s1(s1), _s2(s2)
{
	std::cout << "Constructor of Handler called" << std::endl;
}

Handler::~Handler(void)
{
	_inFile.close();
	_outFile.close();
	std::cout << "Destructor of Handler called" << std::endl;
}

/*
	on recupere le nom du fichier passe en argument et on rajoute ".replace" pour le mettre a la fin du fichier qui va etre cree
	ensuite on ouvre les 2 fichiers :
		- ifstream : permet de lire dans un fichier
		- ofstream : permet d'ecrire dans un fichier
	on doit ajouter ".c_str()" car, avec c++98, ils attendent un "const char*" et non un "std::string" comme avec c++11
*/

bool	Handler::checkConditions(void)
{
	if (_s1.empty())
		return std::cout << "Cannot accept empty s1" << std::endl, false;
	_inFile.open(_filename.c_str());
	if (!_inFile.is_open())
		return std::cout << "Cannot open inFile" << std::endl, false;
	std::string	replacement;
	replacement = _filename + ".replace";
	_outFile.open(replacement.c_str());
	if (!_outFile.is_open())
		return std::cout << "Cannot open outFile" << std::endl, false;
	return true;
}

void	Handler::replaceFromFile(void)
{
	if (!checkConditions())
		return ;
	str		current;
	size_t	occ;
	size_t	index;

	while (std::getline(_inFile, current))
	{
		index = 0;
		while (1)
		{
			occ = current.find(_s1, index);
			if (occ == std::string::npos)
			{
				_outFile << current << std::endl;
				break ;
			}
			current.erase(occ, _s1.length());
			current.insert(occ, _s2);
			index = occ + _s2.length();
		}
	}
}
