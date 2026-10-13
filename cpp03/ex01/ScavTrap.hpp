/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:03:37 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/13 18:29:51 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	private:
		bool	_guardGate;

	public:
		bool	getGGStatus(void);
		void	guardGate(void);
		ScavTrap(void);
		ScavTrap(str name, unsigned int hp, unsigned int ener_pt, unsigned int att_dam);
		ScavTrap(ScavTrap &other);
		ScavTrap	&operator=(ScavTrap &other);
		~ScavTrap(void);
};

#endif