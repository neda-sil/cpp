	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 14:15:58 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/17 15:16:40 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void	testFunc(T *ptr)
{
	*ptr += 2;
}

int	main(void)
{
	int	array[5] = {1, 2, 3, 4, 5};

	std::cout << "before\n";
	for(int i = 0;i < 5;i++)
		std::cout << "array[" << i << "]: " << array[i] << "\n";
	::iter(array, 5, testFunc);
	std::cout << "after:\n";
	for(int i = 0;i < 5;i++)
		std::cout << "array[" << i << "]: " << array[i] << "\n";
}
