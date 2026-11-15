/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 19:25:36 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/15 19:32:13 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data	test;

	test.CHAR = 'c';
	test.INT = 526839;
	test.FLOAT = 2939.356f;

	std::cout << "PRINTING DATA:\nCHAR: " << test.CHAR << "\nINT: " << test.INT << "\nFLOAT: " << test.FLOAT << std::endl;

	uintptr_t	ptrint = Serializer::serialize(&test);

	std::cout << "\nPRINTING UINTPTR_T OF DATA:\n" << ptrint <<std::endl;

	Data	*test2 = Serializer::deserialize(ptrint);

	std::cout << "\nPRINTING DATA2:\nCHAR: " << test2->CHAR << "\nINT: " << test2->INT << "\nFLOAT: " << test2->FLOAT << std::endl;

}