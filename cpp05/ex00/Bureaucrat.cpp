/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:26:27 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/27 14:54:26 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Public functions

const std::string	Bureaucrat::getName(void) const
{
	return this->_name;
}

int	Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void	Bureaucrat::incrGrade(void)
{
	_grade--;
	std::cout << _name << " grade is now at " << _grade << "\n";
}

void	Bureaucrat::decrGrade(void)
{
	_grade++;
	std::cout << _name << " grade is now at " << _grade << "\n";
}

// Constructors and Destructors

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat created: " << this->_name << " graded " << this->_grade << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	Bureaucrat(other._name, other._grade);
	std::cout << "Bureaucrat copy: " << this->_name << " graded " << this->_grade << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		Bureaucrat(other._name, other._grade);
	}
	return *this;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << this->_name << " graded " << this->_grade << " destructor" << std::endl;
}

// Operators

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &brcrt)
{
	os << brcrt.getName() << ", bureacrat grade " << brcrt.getGrade() << ".";
	return os;
}
