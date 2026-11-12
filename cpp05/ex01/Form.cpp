/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 17:21:45 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/09 17:06:14 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Public functions

//	- Getters

const std::string	&Form::getName(void) const
{
	return _name;
}

bool	Form::getSigned(void) const
{
	return _signed;
}

int	Form::getGradeToSign(void) const
{
	return _gradeToSign;
}

int	Form::getGradeToExec(void) const
{
	return _gradeToExec;
}

//	- Other functions

void	Form::beSigned(const Bureaucrat &signatory)
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

// Constructors and Destrucors

Form::Form(void) : _name("default"), _signed(false), _gradeToSign(150), _gradeToExec(150)
{

}

Form::Form(const std::string &name, int GTS, int GTE) : _name(name), _signed(false), _gradeToSign(GTS), _gradeToExec(GTE)
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

Form::Form(const Form &other) : _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec)
{

}

Form	&Form::operator=(const Form &other)
{
	if (this != &other)
	{
		//seul "_signed" peut etre modifie
		this->_signed = other._signed;
	}
	return *this;
}

Form::~Form(void)
{

}

// Exceptions

const char	*Form::GradeTooHighException::what(void) const throw()
{
	return "Grade is too high";
}

const char	*Form::GradeTooLowException::what(void) const throw()
{
	return "Grade is too low";
}

// operator>>

std::ostream	&operator<<(std::ostream &os, const Form &form)
{
	os << "Form " << form.getName() << " that can be signed with grade " << form.getGradeToSign() << " and executed with grade " << form.getGradeToExec() << " is " << (form.getSigned() ? "signed" : "not signed");
	return os;
}
