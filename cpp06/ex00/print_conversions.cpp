/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_conversions.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 00:14:51 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/15 14:06:36 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	print_char(const int c)
{
	if (c < 32 || c > 126)
		std::cout << "char: NON DISPLAYABLE\nint: " << c << "\nfloat: " << c << ".0f\ndouble: " << ".0" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(c) << "\nint: " << static_cast<int>(c) << "\nfloat: " << static_cast<float>(c) << ".0f\ndouble: " << static_cast<double>(c) << ".0" << std::endl;
}

void	print_int(const std::string &input)
{
	double number = std::strtod(input.c_str(), NULL);

	if (number < MIN_INT || number > MAX_INT)
		std::cout << "char: NON DISPLAYABLE\nint: IMPOSSIBLE" << "\nfloat: " << number << ".0f\ndouble: " << number << ".0" << std::endl;
	else if (number < 32 || number > 126)
		std::cout << "char: NON DISPLAYABLE\nint: " << static_cast<int>(number) << "\nfloat: " << static_cast<float>(number) << ".0f\ndouble: " << number << ".0" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(number) << "\nint: " << static_cast<int>(number) << "\nfloat: " << static_cast<float>(number) << ".0f\ndouble: " << number << ".0" << std::endl;
}

void	print_float(const std::string &input)
{
	double number = std::strtod(input.c_str(), NULL);

	if (number < MIN_INT || number > MAX_INT)
	std::cout << "char: NON DISPLAYABLE\nint: IMPOSSIBLE" << "\nfloat: " << static_cast<float>(number) << "f\ndouble: " << number << std::endl;
	else if (number < MIN_FLOAT || number > MAX_FLOAT)
		std::cout << "char: NON DISPLAYABLE\nint: IMPOSSIBLE\nfloat: IMPOSSIBLE\ndouble: " << number << std::endl;
	else if (number < 32 || number > 126)
		std::cout << "char: NON DISPLAYABLE\nint: " << static_cast<int>(number) << "\nfloat: " << static_cast<float>(number) << "f\ndouble: " << number << std::endl;
	else
		std::cout << "char: " << static_cast<char>(number) << "\nint: " << static_cast<int>(number) << "\nfloat: " << static_cast<float>(number) << "f\ndouble: " << number << std::endl;
}

void	print_special(void)
{
	std::cout << "char: NON DISPLAYABLE\nint: IMPOSSIBLE\nfloat: nanf\ndouble: nan" << std::endl;
}
