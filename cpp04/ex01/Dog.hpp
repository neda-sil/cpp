/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:08:56 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/20 15:58:48 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal
{
	private:
		Brain	*_brain;

	public:
		void				makeSound(void) const;
		void				setThought(const std::string idea);
		const std::string	getThought(unsigned int id) const;

		Dog(void);
		Dog(const Dog &other);
		Dog	&operator=(const Dog &other);
		~Dog(void);
};

#endif