/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 15:54:57 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/09 13:29:18 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void	own_tests(Fixed a, Fixed b) // a = 0.0078125, b = 10.1016
{
	std::cout << "\nOwn test:\n\n";
	Fixed	c;

	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	std::cout << b / Fixed (2) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;
	c = Fixed::max(a, b);
	std::cout << c << std::endl;
	c = Fixed::min(a, b);
	std::cout << c << std::endl;
	std::cout << ((a < b) ? "true" : "false") << std::endl;
	std::cout << ((a <= b) ? "true" : "false") << std::endl;
	std::cout << ((a > b) ? "true" : "false") << std::endl;
	std::cout << ((a >= b) ? "true" : "false") << std::endl;
	std::cout << ((a == b) ? "true" : "false") << std::endl;
	std::cout << ((a != b) ? "true" : "false") << std::endl;
}

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	own_tests(a, b);
	return 0;
}

/* expected output:

$> ./a.out
0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
10.1016

*/