/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationAForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 14:04:43 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/10 14:04:43 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Renew of abstract class functions

const std::string	&ShrubberyCreationForm::getName(void) const
{
	return AForm::getName();
}

bool	ShrubberyCreationForm::getSigned(void) const
{
	return AForm::getSigned();
}

int	ShrubberyCreationForm::getGradeToSign(void) const
{
	return AForm::getGradeToSign();
}

int	ShrubberyCreationForm::getGradeToExec(void) const
{
	return AForm::getGradeToExec();
}

// Executor

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
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
		std::ofstream	_outFile;
		_outFile.open(_fileName.c_str());
	
		std::cout << executor.getName() << " executed " << this->getName() << "\n";
		for(int i = 0;i < 3;i++)
			_outFile << "       _-_\n    /~~   ~~\n /~~         ~~\n{               }\n \\  _-     -_  /\n   ~  \\\\ //  ~\n_- -   | | _- _\n  _ -  | |   -_\n      // \\\\\n\n";

		_outFile.close();
	}
}

// Constructors and Destructors

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("here", 145, 137)
{
	_fileName = "here_shrubbery";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm(target, 145, 137)
{
	_fileName = target + "_shrubbery";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other)
{
	*this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		*this = other;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
