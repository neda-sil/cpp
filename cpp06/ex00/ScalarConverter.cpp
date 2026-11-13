/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 13:57:01 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/13 15:45:07 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// Helpful functions

static types_t	which_number(const std::string &input)
{
	size_t		i = 0;
	types_t	type = integer;
	bool	encountered_point = false;
	while (input[i])
	{
		if (i == 0 && (input[i] == '-' || input[i] == '+'))
			i++;
		if ((std::isalpha(input[i]) && (input[i] != '.' && input[i] != 'f')) ||
			(input[i] == 'f' && (input[i + 1] || !encountered_point)) ||
			(input[i] == '.' && !std::isdigit(input[i + 1]) && !std::isdigit(input[i - 1])))
			return invalid;
		if (input[i] == '.')
		{
			encountered_point = true;
			type = double_float;
		}
		if (input[i] == 'f' && encountered_point)
			type = float_num;
		i++;
	}
	return type;
}

static int	is_pl(const std::string &input)
{
	if (input == "-inff" || input == "+inff" || input == "nanf")
		return 1;
	else if (input == "-inf" || input == "+inf" || input == "nan")
		return 2;
	return 0;
}

static types_t	define_type(const std::string &input)
{
	if (std::isdigit(input[0]) || is_pl(input) || input[0] == '-' || input[0] == '+')
	{
		if (is_pl(input) == 1)
			return float_pl;
		else if (is_pl(input) == 2)
			return double_float_pl;
		return which_number(input);
	}
	else
	{
		if (input.size() != 1)
			return invalid;
		else
			return character;
	}
	return invalid;
}

// Main convert function

void	ScalarConverter::convert(const std::string &input)
{
	types_t	type = define_type(input);

	std::cout << type << std::endl;
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
