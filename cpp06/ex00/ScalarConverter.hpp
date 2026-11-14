/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 13:45:18 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/15 00:20:52 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <limits>

# define MIN_INT std::numeric_limits<int>::min()
# define MAX_INT std::numeric_limits<int>::max()
# define MIN_FLOAT std::numeric_limits<float>::min()
# define MAX_FLOAT std::numeric_limits<float>::max()

typedef enum	types_e
{
	CHAR,		// 0
	INT,		// 1
	FLOAT,		// 2
	DOUBLE,		// 3
	SPECIAL,	// 4
	INVALID		// 5
}				types_t;

types_t	define_type(const std::string &input);

// Printing functions

void print_char(const int c);

class ScalarConverter
{
	private:
		static double	value;

		ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter &operator=(const ScalarConverter &other);
		~ScalarConverter();


	public:
		static void	convert(const std::string &input);
};

#endif