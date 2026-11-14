/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 13:57:01 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/14 20:04:29 by neda-sil         ###   ########.fr       */
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
			break;
		case INT:
			break;
		case FLOAT:
			break;
		case DOUBLE:
			break;
		case SPECIAL:
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
