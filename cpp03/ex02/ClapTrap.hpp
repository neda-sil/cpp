/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:09:46 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/13 18:30:34 by neda-sil         ###   ########.fr       */
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
		virtual str				getName(void) const;
		virtual unsigned int	getHP(void) const;
		virtual unsigned int	getEnergyPoint(void) const;
		virtual unsigned int	getAttackDamage(void) const;

		virtual void			setName(const str name);
		virtual void			setHP(const int amount);
		virtual void			setEnergyPoint(const int amount);
		virtual void			setAttackDamage(const int amount);

		virtual void		attack(const str &target);
		virtual void		takeDamage(unsigned int amount);
		virtual void		beRepaired(unsigned int amount);

		ClapTrap(void);
		ClapTrap(str name, int hp, int ener_pt, int att_damage);
		ClapTrap(ClapTrap &other);
		ClapTrap &operator=(ClapTrap &other);
		~ClapTrap(void);
};

#endif