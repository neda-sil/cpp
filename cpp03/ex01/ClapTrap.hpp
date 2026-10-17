/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:09:46 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/17 13:18:51 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <limits>

class	ClapTrap
{
	protected:
		std::string			_name;
		unsigned int		_hit_point;
		unsigned int		_energy_point;
		unsigned int		_attack_damage;

	public:
		std::string			getName(void) const;
		unsigned int		getHP(void) const;
		unsigned int		getEnergyPoint(void) const;
		unsigned int		getAttackDamage(void) const;

		virtual void		attack(const std::string &target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);

		ClapTrap(void);
		explicit ClapTrap(const std::string &name);
		ClapTrap(const ClapTrap &other);
		ClapTrap &operator=(const ClapTrap &other);
		virtual ~ClapTrap(void);
};

#endif