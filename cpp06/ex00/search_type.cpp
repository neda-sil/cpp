/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_type.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 19:31:57 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/15 00:23:39 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

types_t	select_num_type(const std::string &input)
{
	size_t	i = 0;
	bool	point = false;
	bool	f = false;

	if (input[0] == '+' || input[0] == '-')
	{
		if (isdigit(input[1]))
			i++;
		else
			return INVALID;
	}
	while (input[i])
	{
		if (!isdigit(input[i]) && (input[i] == '.' || input[i] == 'f'))
		{
			if (input[i] == '.' && isdigit(input[i - 1]) && isdigit(input[i + 1]) && !point)
				point = true;
			else if (input[i] == 'f' && isdigit(input[i - 1]) && !input[i + 1] && !f)
				f = true;
			else return INVALID;
		}
		else if (!isdigit(input[i]))
			return INVALID;
		i++;
	}
	if (point && f)
		return FLOAT;
	else if (!point && f)
		return INVALID;
	else if (point && !f)
		return DOUBLE;
	else return INT;
}

types_t	define_type(const std::string &input)
{
	if (input == "nanf" || input == "-inff" || input == "+inff" ||
		input == "nan" || input == "-inf" || input == "+inf")
		return SPECIAL;
	if (isdigit(input[0]) || (input[0] == '-' && isdigit(input[1])) || (input[0] == '+' && isdigit(input[1])))
		return select_num_type(input);
	if (input[0] && !input[1])
		return CHAR;
	return INVALID;
}
