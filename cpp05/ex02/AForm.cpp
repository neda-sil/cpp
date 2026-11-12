/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 17:21:45 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/09 17:06:14 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// Public functions

//	- Getters

const std::string	&AForm::getName(void) const
{
	return _name;
}

bool	AForm::getSigned(void) const
{
	return _signed;
}

int	AForm::getGradeToSign(void) const
{
	return _gradeToSign;
}

int	AForm::getGradeToExec(void) const
{
	return _gradeToExec;
}

//	- Other functions

void	AForm::beSigned(const Bureaucrat &signatory)
{
	if (signatory.getGrade() > _gradeToSign)
	{
		std::cout << signatory.getName() << " couldn't sign " << _name << " because the grade to sign is higher\n";
		throw GradeTooLowException();
	}
	else
	{
		_signed = true;
		std::cout << signatory.getName() << " signed " << _name << std::endl;
	}
}

void	AForm::execute(const Bureaucrat &executor) const
{
	this->execute(executor);
}

// Constructors and Destrucors

AForm::AForm(void) : _name("default"), _signed(false), _gradeToSign(150), _gradeToExec(150)
{

}

AForm::AForm(const std::string &name, int GTS, int GTE) : _name(name), _signed(false), _gradeToSign(GTS), _gradeToExec(GTE)
{
	if (GTS < 1)
		throw GradeTooHighException();
	else if (GTS > 150)
		throw GradeTooLowException();
	if (GTE < 1)
		throw GradeTooHighException();
	else if (GTE > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm &other) : _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec)
{

}

AForm	&AForm::operator=(const AForm &other)
{
	if (this != &other)
	{
		//seul "_signed" peut etre modifie
		this->_signed = other._signed;
	}
	return *this;
}

AForm::~AForm(void)
{

}

// Exceptions

const char	*AForm::GradeTooHighException::what(void) const throw()
{
	return "Grade is too high";
}

const char	*AForm::GradeTooLowException::what(void) const throw()
{
	return "Grade is too low";
}

const char	*AForm::FormIsNotSigned::what(void) const throw()
{
	return "Form has not been signed";
}

// operator>>

std::ostream	&operator<<(std::ostream &os, const AForm &AForm)
{
	os << "AForm " << AForm.getName() << " that can be signed with grade " << AForm.getGradeToSign() << " and executed with grade " << AForm.getGradeToExec() << " is " << (AForm.getSigned() ? "signed" : "not signed");
	return os;
}
