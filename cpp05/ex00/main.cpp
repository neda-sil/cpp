/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:26:09 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/09 14:45:25 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		std::cout << "TESTING UNTIL LIMITS\n";
		std::cout << "\nBureaucrat a------------------\n";
		Bureaucrat	a("Nelson", 5);

		std::cout << "\nBureaucrat b------------------\n";
		Bureaucrat b("oui", 145);
		
		std::cout << "\nBureaucrat c------------------\n";
		Bureaucrat c;
		
		std::cout << "\nCopy assignement c = a------------------\n";
		c = a;

		std::cout << "\nb decrGrade to 150------------------\n";
		b.decrGrade();
		b.decrGrade();
		b.decrGrade();
		b.decrGrade();
		b.decrGrade();

		std::cout << "\na incrGrade to 1------------------\n";
		a.incrGrade();
		a.incrGrade();
		a.incrGrade();
		a.incrGrade();

		std::cout << "\nGetters tests------------------\n";
		std::cout << "c.getName() and c.getGrade() : " << c.getName() << " " << c.getGrade() << "\n" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "\nERROR: " << e.what() << '\n';
	}
	std::cout << "\nTRYING INCR AND DECR ABOVE LIMITS\n\n";
	try
	{
		Bureaucrat	d("Chantal", 1);
		d.incrGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << "ERROR: " << e.what() << '\n';
	}
	try
	{
		Bureaucrat	e("Ginette", 150);
		e.decrGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << "ERROR: " << e.what() << '\n';
	}

	std::cout << "\nTRYING TOO HIGH AND TOO LOW CONSTRUCTOR\n\n";
	try
	{
		Bureaucrat	high("Daniel", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << "ERROR: " << e.what() << '\n';
	}
	try
	{
		Bureaucrat	low("Jeff", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << "ERROR: " << e.what() << '\n';
	}

	std::cout << "\nTESTING WITH BUREAUCRAT CREATED OUT OF THE TRY/CATCH\n\n";
	Bureaucrat	test("Dingo", 150);
	Bureaucrat	test2("Dingo2", 1);
	try
	{
		test.decrGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	try
	{
		test2.incrGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	std::cout << test << std::endl;
	std::cout << test2 << std::endl;
}
