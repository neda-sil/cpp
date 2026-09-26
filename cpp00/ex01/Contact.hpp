/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 17:19:25 by neda-sil          #+#    #+#             */
/*   Updated: 2026/09/25 11:13:50 by neda-sil         ###   ########.fr       */
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
	toutes les fonctions ne contiennent qu'une seule ligne, d'ou la declaration et definition sur la meme ligne
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
		void		_set_id(int value) {this->_id = value;};
		void		_set_first_name(std::string value) {this->_first_name = value;};
		void		_set_last_name(std::string value) {this->_last_name = value;};
		void		_set_nickname(std::string value) {this->_nickname = value;};
		void		_set_phone_number(std::string value) {this->_phone_number = value;};
		void		_set_darkest_secret(std::string value) {this->_darkest_secret = value;};
		int			_get_id(void) {return this->_id;};
		std::string	_get_first_name(void) {return this->_first_name;};
		std::string	_get_last_name(void) {return this->_last_name;};
		std::string	_get_nickname(void) {return this->_nickname;};
		std::string	_get_phone_number(void) {return this->_phone_number;};
		std::string	_get_darkest_secret(void) {return this->_darkest_secret;};
		Contact(void);
		~Contact(void);
};

#endif