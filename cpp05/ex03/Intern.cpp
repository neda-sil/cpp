/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 01:50:15 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/12 02:27:25 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

//Other functions

static AForm	*shrub(const std::string &target)
{
	return new ShrubberyCreationForm(target);
}

static AForm	*robotomy(const std::string &target)
{
	return new RobotomyRequestForm(target);
}

static AForm	*presidential(const std::string &target)
{
	return new PresidentialPardonForm(target);
}

AForm	*Intern::makeForm(const std::string &form, const std::string &target)
{
	std::string	formsType[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	typedef AForm	*(*form_t)(const std::string&);
	form_t	forms[3] = {&shrub, &robotomy, &presidential};

	for(int i = 0;i<3;i++)
		if (formsType[i] == form)
			return forms[i](target);
	std::cerr << "FORM TYPE NOT FOUND\n";
	return NULL;
}

//Constructors and Destructors

Intern::Intern()
{

}

Intern::Intern(const Intern &other)
{
	*this = other;
}

Intern &Intern::operator=(const Intern &other)
{
	if (this != &other)
	{
		*this = other;
	}
	return *this;
}

Intern::~Intern()
{

}
