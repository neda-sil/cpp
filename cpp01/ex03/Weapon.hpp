/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:22:44 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/01 14:46:31 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON__HPP
# define WEAPON__HPP

#include <iostream>

class Weapon
{
	private:
		std::string	_type;

	public:
		std::string	getType();
		void	setType(std::string type);
		Weapon(std::string weapon);
		~Weapon();
};

#endif