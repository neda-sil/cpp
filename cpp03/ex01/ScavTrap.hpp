/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 19:08:58 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/16 21:55:43 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
		void	attack(const std::string &target);
		void	guardGate(void);

		ScavTrap(void);
		explicit ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap &other);
		ScavTrap	&operator=(const ScavTrap &other);
		~ScavTrap(void);
};

#endif