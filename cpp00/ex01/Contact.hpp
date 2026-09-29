/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 17:19:25 by neda-sil          #+#    #+#             */
/*   Updated: 2026/09/28 15:00:46 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

//ou se trouve "cout" et "cin"
# include <iostream>
//ou se trouve "toupper" et "empty"
# include <string>

/*
	class Contact qui sert de "moule a gateau" pour toutes les instances:
	toutes les variables concernant un utilisateur en private
	toutes les fonctions qui permet d'y acceder en public
*/
class	Contact
{
	private:
		int	_id;
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;

	public:
		void		_set_id(int value);
		void		_set_first_name(std::string value);
		void		_set_last_name(std::string value);
		void		_set_nickname(std::string value);
		void		_set_phone_number(std::string value);
		void		_set_darkest_secret(std::string value);
		int			_get_id(void);
		std::string	_get_first_name(void);
		std::string	_get_last_name(void);
		std::string	_get_nickname(void);
		std::string	_get_phone_number(void);
		std::string	_get_darkest_secret(void);

		Contact(void);
		~Contact(void);
};

#endif