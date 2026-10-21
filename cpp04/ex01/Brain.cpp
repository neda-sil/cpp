/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 13:03:50 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/21 17:16:39 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Public functions

void	Brain::setIdea(const std::string &idea)
{
	if (_id > 99)
		std::cout << "You cannot have thoughts anymore" << std::endl;
	else
	{
		_ideas[_id] = idea;
		_id++;
		std::cout << "'" << idea << "' is the thought" << std::endl;
	}
}

const std::string	Brain::getIdea(unsigned int id) const
{
	if (id > 99 || !_ideas[id][0])
		return "Idea doesn't exist";
	return _ideas[id];
}

// Constructors and destructors

Brain::Brain(void) : _id(0)
{
	for(int i=0;i<100;i++)
		_ideas[i] = "";
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	for(int i=0;i<100;i++)
		this->_ideas[i] = other._ideas[i];
	this->_id = other._id;
}

Brain	&Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		std::cout << "DOIJWALD\n";
		for(int i=0;i<100;i++)
			this->_ideas[i] = other._ideas[i];
		std::cout << "DOIJWALD\n";
		this->_id = other._id;
	}
	return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}
