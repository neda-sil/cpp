/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:08:45 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/27 10:31:12 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class	AAnimal
{
	protected:
		std::string	_type;

	public:
		virtual void				makeSound(void) const = 0;
		virtual const std::string	getType(void) const = 0;

		AAnimal(void);
		AAnimal(const AAnimal &other);
		AAnimal	&operator=(const AAnimal &other);
		virtual ~AAnimal();
};

#endif