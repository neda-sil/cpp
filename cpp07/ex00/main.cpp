/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 11:45:43 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/17 13:54:23 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void)
{
	std::cout << "max(3, 7) : " << ::max(3, 7) << std::endl;
	std::cout << "max(3.33f, 7.3f) : " << ::max(3.33f, 7.3f) << std::endl;
	std::cout << "'d': " << static_cast<int>('d') << " / '+': " << static_cast<int>('+') << "\nmin('d', '+') : " << min('d', '+') << std::endl;
	std::cout << "for strings, compares len:\nmin(\"Bonjour Monsieur\", \"Hola Senior\") : " << min("Bonjour Monsieur", "Hola Senior") << std::endl;

	double	a = 9.8;
	double	b = 3243.1;

	std::cout << "\na : " << a << "\nb : " << b << std::endl;
	::swap(&a, &b);
	std::cout << "a : " << a << "\nb : " << b << std::endl;
}
