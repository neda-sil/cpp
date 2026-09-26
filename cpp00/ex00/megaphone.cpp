/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:17:46 by neda-sil          #+#    #+#             */
/*   Updated: 2026/09/23 16:52:13 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//bibliotheque dans laquelle "cout" et "cin" est stockee
#include <iostream>
//bibliothque dans laquelle "toupper" est stockee
#include <string>

int		main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE NOISE *" << std::endl;
	else
	{
		int	i = 0;
		while (av[++i])
		{
			int	j = -1;
			while (av[i][++j])
				std::cout << static_cast<char>(std::toupper(av[i][j]));
		}
		std::cout << std::endl;
	}
}