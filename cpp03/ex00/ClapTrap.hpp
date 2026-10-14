/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:09:46 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/14 15:54:51 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <limits>

typedef std::string	str;

class	ClapTrap
{
	private:
		str					_name;
		unsigned int		_hit_point;
		unsigned int		_energy_point;
		unsigned int		_attack_damage;

	public:
		str					getName(void) const;
		unsigned int		getHP(void) const;
		unsigned int		getEnergyPoint(void) const;
		unsigned int		getAttackDamage(void) const;

		void				setName(const str name);
		void				setHP(const unsigned int amount);
		void				setEnergyPoint(const unsigned int amount);
		void				setAttackDamage(const unsigned int amount);

		virtual void		attack(const str &target);
		virtual void		takeDamage(unsigned int amount);
		virtual void		beRepaired(unsigned int amount);

		ClapTrap(void);
		ClapTrap(str name);
		ClapTrap(const ClapTrap &other);
		ClapTrap &operator=(const ClapTrap &other);
		virtual ~ClapTrap(void);
};

#endif