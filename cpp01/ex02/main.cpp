/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:02:58 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/01 14:20:55 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string		brain = "HI THIS IS BRAIN";
	std::string*	stringPTR = &brain;
	std::string&	stringREF = brain;

	// Memory addresses
	std::cout << "\nMEMORY ADDRESSES \n" <<
				 &brain << "\n" <<
				 stringPTR << "\n" <<
				 &stringREF << std::endl;

	//Values pointed by vars
	std::cout << "\nVALUES POINTED BY VARS\n" <<
				 brain << "\n" <<
				 *stringPTR << "\n" <<
				 stringREF << std::endl;
}