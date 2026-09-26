/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 17:18:59 by neda-sil          #+#    #+#             */
/*   Updated: 2026/09/25 11:26:58 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
//pour "exit"
# include <cstdlib>
//pour "setw()"
# include <iomanip>
//pour "ostringstream"
# include <sstream>

//declaration d'un namespace pour l'utiliser partout
namespace	verifs
{
	void	verif_eof(void);
	void	verif_only_num(void);
}

/*
	class PhoneBook qui s'occupe de regrouper tous les contacts en un tableau de [8] en private
	"_select()" en private car on ne l'utilise pas autre part, mais pas mise en static car on doit utiliser "this"
	puis declaration de toutes les fonctions a utiliser autre part que dans PhoneBook.cpp
*/
class	PhoneBook
{
	private:
		Contact contacts[8];
		void	_select(void);

	public:
		void	_add(int id);
		void	_search(void);
		PhoneBook(void);
		~PhoneBook(void);
};

#endif