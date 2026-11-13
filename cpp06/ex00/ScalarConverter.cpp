/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 13:57:01 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/13 16:35:58 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// Helpful functions

types_t	define_type(const std::string &input)
{
	
}

// Main convert function

void	ScalarConverter::convert(const std::string &input)
{
	types_t	type = define_type(input);

	switch (type)
	{
		case INVALID:
			break;
		case CHAR:
			break;
		case INT:
			break;
		case FLOAT:
			break;
		case FLOAT_PL:
			break;
		case DOUBLE:
			break;
		case DOUBLE_PL:
			break;
		default:
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
