/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:09:46 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/13 18:28:56 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

typedef std::string	str;

class	ClapTrap
{
	private:
		str				_name;
		unsigned int	_hit_point;
		unsigned int	_energy_point;
		unsigned int	_attack_damage;

	public:
		str				getName(void) const;
		unsigned int	getHP(void) const;
		unsigned int	getEnergyPoint(void) const;
		unsigned int	getAttackDamage(void) const;

		void		attack(const str &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		ClapTrap(void);
		ClapTrap(str name, int hp, int ener_pt, int att_damage);
		ClapTrap(ClapTrap &other);
		ClapTrap &operator=(ClapTrap &other);
		~ClapTrap(void);
};

#endif