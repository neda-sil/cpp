/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 14:18:24 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/17 15:13:44 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void	iter(T *array, const size_t len, void (*f)(T *ptr))
{
	for(size_t i = 0;i < len;i++)
		f(&array[i]);
}

template<typename T>
void	testFunc(T *ptr)
{
	*ptr += 2;
}

#endif