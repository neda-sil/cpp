/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:26:27 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/07 17:16:07 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Public functions

//	- Getters

const std::string	&Bureaucrat::getName(void) const
{
	return this->_name;
}

int	Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

//	- Grade changing functions

/*1 is the maximum grade, so incrementing grade means decrement the grade value*/
void	Bureaucrat::incrGrade(void)
{
	switch(_grade)
	{
		case 1:
			throw GradeTooHighException();
			break;
		default:
			_grade--;
			std::cout << _name << " grade is now at " << _grade << "\n";
	}
}

/*150 is the minimum value, so decrementing grade means increment the grade value*/
void	Bureaucrat::decrGrade(void)
{
	switch(_grade)
	{
		case 150:
			throw GradeTooLowException();
			break;
		default:
			_grade++;
			std::cout << _name << " grade is now at " << _grade << "\n";
	}
}

// Constructors and Destructors

Bureaucrat::Bureaucrat(void) : _name("unnamed"), _grade(150)
{
	std::cout << "Default Bureaucrat created: " << this->_name << " graded " << this->_grade << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade)
{
	if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
	else
		std::cout << "Bureaucrat created: " << this->_name << " graded " << this->_grade << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade)
{
	std::cout << "Bureaucrat copy: " << this->_name << " graded " << this->_grade << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		// je ne peux pas copier le nom car c'est un const
		_grade = other._grade;
		std::cout << "Copy assignement from " << other._name << " to " << _name << " to give grade " << _grade << std::endl;
	}
	return *this;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << this->_name << " graded " << this->_grade << " destructor" << std::endl;
}

// Exceptions

//	- GradeTooHighExeption functions

/*This is the exception that will be thrown if the grade is too high*/
const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "Grade is too high: 1 is the maximum";
}

//	- GradeTooLowExeption functions

/*This is the exception that will be thrown if the grade is too low*/
const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "Grade is too low: 150 is the minimum";
}

// Operators

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &brcrt)
{
	os << brcrt.getName() << ", bureaucrat grade " << brcrt.getGrade() << ".";
	return os;
}
