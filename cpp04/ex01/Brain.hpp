/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 13:04:02 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/22 14:21:43 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class	Brain
{
	private:
		std::string		_ideas[100];
		unsigned int	_id;

	public:
		void				setIdea(const std::string &idea);
		const std::string	getIdea(unsigned int id) const;

		Brain(void);
		explicit Brain(const Brain &other);
		Brain	&operator=(const Brain &other);
		~Brain(void);
};

#endif