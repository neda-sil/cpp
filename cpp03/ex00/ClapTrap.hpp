/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:09:46 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/13 15:50:17 by neda-sil         ###   ########.fr       */
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
		str				getName() const;
		unsigned int	getHP() const;
		unsigned int	getEnergyPoint() const;
		unsigned int	getAttackDamage() const;

		void		attack(const str &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		ClapTrap();
		ClapTrap(str name, int hp, int ener_pt, int att_damage);
		ClapTrap(ClapTrap &other);
		ClapTrap &operator=(ClapTrap &other);
		~ClapTrap();
};

#endif