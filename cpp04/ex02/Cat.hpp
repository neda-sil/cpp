/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:09:35 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/27 11:54:10 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class	Cat : public AAnimal
{
	private:
		Brain	*_brain;

	public:
		void				makeSound(void) const;
		const std::string	getType(void) const;
		void				setThought(const std::string idea);
		const std::string	getThought(unsigned int id) const;

		Cat(void);
		Cat(const Cat &other);
		Cat	&operator=(const Cat &other);
		~Cat(void);
};

#endif