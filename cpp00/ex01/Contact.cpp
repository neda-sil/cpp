/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 17:19:10 by neda-sil          #+#    #+#             */
/*   Updated: 2026/09/28 14:59:40 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::_set_id(int value)
{_id = value;}

void	Contact::_set_first_name(std::string value)
{_first_name = value;}

void	Contact::_set_last_name(std::string value)
{_last_name = value;}

void	Contact::_set_nickname(std::string value)
{_nickname = value;}

void	Contact::_set_phone_number(std::string value)
{_phone_number = value;}

void	Contact::_set_darkest_secret(std::string value)
{_darkest_secret = value;}

int	Contact::_get_id(void)
{return _id;};

std::string	Contact::_get_first_name(void)
{return _first_name;}

std::string	Contact::_get_last_name(void)
{return _last_name;}

std::string	Contact::_get_nickname(void)
{return _nickname;}

std::string	Contact::_get_phone_number(void)
{return _phone_number;}

std::string	Contact::_get_darkest_secret(void)
{return _darkest_secret;}


/*
	constructeur Contact qui  met toutes les variables de chaque instance a 0
*/
Contact::Contact(void)
{
	_set_id(0);
	_set_first_name("");
	_set_last_name("");
	_set_nickname("");
	_set_phone_number("");
	_set_darkest_secret("");
}

//pas besoin de destructeur
Contact::~Contact(void)
{
}
