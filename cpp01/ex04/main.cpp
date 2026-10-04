/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 11:39:16 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/02 13:57:06 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Handler.hpp"


int	main(int ac, char **av)
{
	if (ac != 4)
		return std::cout << "error: not enough or too much args\n", 1;

	Handler	infos(av[1], av[2], av[3]);
	infos.replaceFromFile();
}
