/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:26:09 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/11 19:23:36 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat boss("Michel", 1);
	Bureaucrat director("Sebastien", 30);
	Bureaucrat manager("Frederic", 50);
	Bureaucrat employee("Brice", 100);
	Bureaucrat intern("Manuel", 150);

	ShrubberyCreationForm a("Shrubbery");
	RobotomyRequestForm b("Robotomy");
	PresidentialPardonForm c("Presidential");

	std::cout << "TRYING EVERY WORKING CASES\n\n";
	try
	{
		boss.signForm(a);
		boss.executeForm(a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n";
	try
	{
		boss.signForm(b);
		boss.executeForm(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n";
	try
	{
		boss.signForm(c);
		boss.executeForm(c);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	ShrubberyCreationForm a1("Shrubbery");
	RobotomyRequestForm b1("Robotomy");
	PresidentialPardonForm c1("Presidential");

	std::cout << "\nTRYING EVERY NON WORKING CASES\n\nSCHRUBBERY CASES\n\n";

	try
	{
		boss.executeForm(a1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n";
	try
	{
		boss.signForm(a1);
		intern.executeForm(a1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n";
	try
	{
		intern.signForm(a1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\nROBOTOMY CASES\n\n";

	try
	{
		boss.executeForm(b1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n";
	try
	{
		boss.signForm(b1);
		intern.executeForm(b1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n";
	try
	{
		intern.signForm(b1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\nPRESIDENTIAL CASES\n\n";

	try
	{
		boss.executeForm(c1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n";
	try
	{
		boss.signForm(c1);
		intern.executeForm(c1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n";
	try
	{
		intern.signForm(c1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
