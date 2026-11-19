/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 13:52:07 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/19 14:30:36 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>
class Array
{
	private:
		size_t	_len;
		T		*_array;

	public:
		size_t	size(void);

		T	operator[](int i);

		Array();
		Array(size_t n);
		Array(const Array &other);
		Array &operator=(const Array &other);
		~Array();

		class NotAccessible : public std::exception
		{
			virtual const char *what(void) const throw();
		};
};

#include "Array.tpp"

#endif