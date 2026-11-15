/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 13:57:01 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/15 18:31:30 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// Main convert function

void	ScalarConverter::convert(const std::string &input)
{
	types_t	type = define_type(input);

	switch (type)
	{
		case CHAR:
			print_char(input[0]);
			break;
		case INT:
			print_int(input);
			break;
		case FLOAT:
			print_float(input);
			break;
		case DOUBLE:
			print_float(input);
			break;
		case SPECIAL:
			print_special(input);
			break;
		default:
			// INVALID
			break;
	}
}

// Constructors and Destructors

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	*this = other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	if (this != &other)
	{
		
		*this = other;
	}
	return *this;
}

ScalarConverter::~ScalarConverter()
{

}
