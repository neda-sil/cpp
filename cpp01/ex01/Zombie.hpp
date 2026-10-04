/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 13:13:38 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/01 13:50:48 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
	private:
	std::string	_name;
	
	public:
	void	zombie_name(std::string name);
	void	announce(void);
	Zombie(void);
	~Zombie(void);
};

Zombie*	zombieHorde(int n, std::string name);

#endif