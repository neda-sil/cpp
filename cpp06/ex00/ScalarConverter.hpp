/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 13:45:18 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/13 15:25:52 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>

typedef enum	types_e
{
	character,			// 0
	integer,			// 1
	float_num,			// 2
	float_pl,			// 3
	double_float,		// 4
	double_float_pl,	// 5
	invalid				// 6
}				types_t;

class ScalarConverter
{
	private:
		

		ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter &operator=(const ScalarConverter &other);
		~ScalarConverter();


	public:
		static void	convert(const std::string &input);
};

#endif