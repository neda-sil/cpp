/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_conversions.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 00:14:51 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/15 00:22:22 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	print_char(const int c)
{
	if (c < 32 || c > 126)
		std::cout << "char: NON DISPLAYABLE\nint: " << c << "\nfloat: " << c << ".0f\ndouble: " << ".0" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(c) << "\nint: " << c << "\nfloat: " << c << ".0f\ndouble: " << c << ".0" << std::endl;
}
