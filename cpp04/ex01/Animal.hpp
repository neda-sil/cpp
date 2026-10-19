/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:08:45 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/17 17:23:06 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class	Animal
{
	protected:
		std::string	_type;

	public:
		virtual void		makeSound(void) const;
		virtual std::string	getType(void) const;

		Animal(void);
		Animal(const Animal &other);
		Animal	&operator=(const Animal &other);
		virtual ~Animal();
};

#endif