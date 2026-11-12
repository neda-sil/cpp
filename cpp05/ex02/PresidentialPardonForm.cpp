/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonAForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 13:59:25 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/10 13:59:25 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// Renew of abstract class functions

const std::string	&PresidentialPardonForm::getName(void) const
{
	return AForm::getName();
}

bool	PresidentialPardonForm::getSigned(void) const
{
	return AForm::getSigned();
}

int	PresidentialPardonForm::getGradeToSign(void) const
{
	return AForm::getGradeToSign();
}

int	PresidentialPardonForm::getGradeToExec(void) const
{
	return AForm::getGradeToExec();
}

// Executor

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->getGradeToExec())
	{
		std::cout << executor.getName() << " couldn't execute " << this->getName() << " because the grade to execute is higher\n";
		throw GradeTooLowException();
	}
	else if (!this->getSigned())
	{
		std::cout << executor.getName() << " couldn't execute " << this->getName() << " because the form is not signed\n";
		throw FormIsNotSigned();
	}
	else
	{
		std::cout << executor.getName() << " executed " << this->getName() << "\n";
		std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox.\n";
	}
}

//Constructors and Destructors

PresidentialPardonForm::PresidentialPardonForm() : AForm("here", 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm(target, 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other)
{
	*this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		*this = other;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}
