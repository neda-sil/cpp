/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 11:06:08 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/17 11:40:11 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>

void	identify(Base *p)
{
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);

	if (a)
		std::cout << "Type is A" << std::endl;
	else if (b)
		std::cout << "Type is B" << std::endl;
	else if (c)
		std::cout << "Type is C" << std::endl;
	else
		std::cout << "PUT SOMETHING REAL IN THERE DAMMIT" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		dynamic_cast<A&>(p);
	}
	catch(const std::exception& e)
	{
		std::cerr << "A: " << e.what() << '\n';
	}
	try
	{
		dynamic_cast<B&>(p);
	}
	catch(const std::exception& e)
	{
		std::cerr << "B: " << e.what() << '\n';
	}
	try
	{
		dynamic_cast<C&>(p);
	}
	catch(const std::exception& e)
	{
		std::cerr << "C: " << e.what() << '\n';
	}
}
