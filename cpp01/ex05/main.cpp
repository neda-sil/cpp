/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:06:54 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/05 14:14:24 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstring>

int	main(int ac, char **av)
{
	if (ac != 2)
		return 1;
	Harl	harl;
	std::cout << "DEBUG\n";
	harl.complain("DEBUG");
	std::cout << "INFO\n";
	harl.complain("INFO");
	std::cout << "WARNING\n";
	harl.complain("WARNING");
	std::cout << "ERROR\n";
	harl.complain("ERROR");

	std::cout << "\nOWN TEST\n";
	harl.complain(av[1]);
}