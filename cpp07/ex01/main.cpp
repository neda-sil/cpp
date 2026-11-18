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

void	testFunc(char &ptr)
{
	ptr += 5;
}

void	testFunc2(const int &ptr)
{
	std::cout << "THIS INT IS " << ptr << std::endl;
}

void	testFunc3(double &ptr)
{
	ptr -= 0.2;
}

int	main(void)
{
	char	array[5] = {'a', 'b', 'c', 'd', 'e'};

	std::cout << "CHAR TESTS:\nbefore\n";
	for(int i = 0;i < 5;i++)
		std::cout << "array[" << i << "]: " << array[i] << "\n";
	iter(array, 5, testFunc);
	std::cout << "after:\n";
	for(int i = 0;i < 5;i++)
		std::cout << "array[" << i << "]: " << array[i] << "\n";

	const int	array2[5] = {1, 2, 3, 4, 5};

	std::cout << "\nINT TESTS:\n";
	iter(array2, 5, testFunc2);

	double	array3[5] = {3.2, 21.9, 3252.0, 1.1, 4.87287923794};

	std::cout << "\nDOUBLE TESTS:\nbefore\n";
	for(int i = 0;i < 5;i++)
		std::cout << "array[" << i << "]: " << array3[i] << "\n";
	iter(array3, 5, testFunc3);
	std::cout << "after:\n";
	for(int i = 0;i < 5;i++)
		std::cout << "array[" << i << "]: " << array3[i] << "\n";
}
