/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:26:09 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/12 02:34:44 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Bureaucrat boss("Michel", 1);
	Intern randomIntern;

	AForm *rrf = randomIntern.makeForm(" request", "You");
	if (rrf)
	{
		rrf->beSigned(boss);
		rrf->execute(boss);
		delete rrf;
	}
}
