/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 13:03:50 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/18 14:43:30 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

int	Brain::number = 0;

// Public functions

void	Brain::setIdea(const std::string &idea)
{
	std::cout << "number : " << number << "\n";
	ideas[number] = idea;
	number++;
	std::cout << "'" << idea << "'" << std::endl;
}

const std::string	Brain::getIdea(int id) const
{
	return ideas[id];
}

// Constructors and destructors

Brain::Brain(void)
{
	for(int i=0;i<100;i++)
		ideas[i] = "";
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	for (int i = 0;other.ideas[i][0];i++)
		this->ideas[i] = other.ideas[i];
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &other)
{
	if (this != &other)
		for (int i = 0;other.ideas[i][0];i++)
			this->ideas[i] = other.ideas[i];
	return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}
