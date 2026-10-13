/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:58:01 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/13 18:30:47 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		void	highFiveGuys(void);

		FragTrap(void);
		FragTrap(str name, int hp, int ener_pt, int att_damage);
		FragTrap(FragTrap &other);
		FragTrap &operator=(FragTrap &other);
		~FragTrap(void);
};

# endif