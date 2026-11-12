/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestAForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 14:00:11 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/10 14:00:11 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// Renew of abstract class functions

const std::string	&RobotomyRequestForm::getName(void) const
{
	return AForm::getName();
}

bool	RobotomyRequestForm::getSigned(void) const
{
	return AForm::getSigned();
}

int	RobotomyRequestForm::getGradeToSign(void) const
{
	return AForm::getGradeToSign();
}

int	RobotomyRequestForm::getGradeToExec(void) const
{
	return AForm::getGradeToExec();
}

// Executor

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
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
		for(int i = 0;i<3;i++)
		{
			std::cout << "[DRILLING NOISE]\n";
			sleep(1);
		}
		time_t	timestamp = time(&timestamp);
		std::cout << (timestamp % 2 == 0 ? "TARGET HAS BEEN ROBOTOMISED!!!\n" : "robotomy failed...\n");
	}
}

//Constructors and Destructors

RobotomyRequestForm::RobotomyRequestForm() : AForm("here", 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm(target, 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other)
{
	*this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		*this = other;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}
