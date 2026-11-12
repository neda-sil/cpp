/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:26:09 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/10 14:27:30 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat boss("Michel", 1);
	Bureaucrat director("Sebastien", 30);
	Bureaucrat manager("Frederic", 50);
	Bureaucrat employee("Brice", 100);
	Bureaucrat intern("Manuel", 150);
	try
	{
		std::cout << "TESTING NO ERRORS\n\n";
		Form	a;
		Form	b("piscine a bulle", 50, 30);
		Form	c(b);

		b.beSigned(boss);
		std::cout << "\nb signed: " << b.getSigned() << "\nc signed: " << c.getSigned() << "\n";
		Form	d(b);
		std::cout << "\nd signed: " << d.getSigned() << "\n\n";
		std::cout << "Getters tests using a:\ngetName: " << a.getName() << "\ngetSigned: " << a.getSigned() << "\ngetGradeToSign: " << a.getGradeToSign() << "\ngetGradeToExec: " << a.getGradeToExec() << "\n\n";

		director.signForm(b);
		director.signForm(a);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}

	std::cout << "\nTRYING ERRORS: \n\n";

	try
	{
		Form	e("test1", 0, 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	try
	{
		Form	f("test1", 10, 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	try
	{
		Form	g("test3", 10, 10);
		intern.signForm(g);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	try
	{
		Form	g("test4", 10, 10);
		g.beSigned(intern);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
}
