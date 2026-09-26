/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 17:19:10 by neda-sil          #+#    #+#             */
/*   Updated: 2026/09/25 10:43:53 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/*
	constructeur Contact qui  met toutes les variables de chaque instance a 0
*/
Contact::Contact(void)
{
	this->_set_id(0);
	this->_set_first_name("");
	this->_set_last_name("");
	this->_set_nickname("");
	this->_set_phone_number("");
	this->_set_darkest_secret("");
}

//pas besoin de destructeur
Contact::~Contact(void)
{
}
