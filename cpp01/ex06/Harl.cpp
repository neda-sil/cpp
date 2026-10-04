/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:21:56 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/04 14:16:49 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "Cheap b*****d. You know, I really don't know why you mess around with people like that, Mikey. I mean really, I don't--" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I asked for a fair day's pay after a fair day's work. Then he kinda got a little angry. So, I admit, I kinda got a little angry." << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "What kinda f*ckin' animal do you take me for? No, I didn't kill him." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "But I did kidnap his wife!" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i;

	for (i=0;i<4;i++)
		if (levels[i] == level)
			break;
	switch (i)
	{
		case 0:
			std::cout << "[ DEBUG ]\n";
			this->debug();
			std::cout << "\n";
			// fall through
		case 1:
			std::cout << "[ INFO ]\n";
			this->info();
			std::cout << "\n";
			// fall through
		case 2:
			std::cout << "[ WARNING ]\n";
			this->warning();
			std::cout << "\n";
			// fall through
		case 3:
			std::cout << "[ ERROR ]\n";
			this->error();
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ RANDOM TREVOR SOUNDS ]" << std::endl;
	};
}

Harl::Harl(void)
{
	std::cout << "There's been a change of plans, you don't need to come to the Ranch. Meet me at Stoner Cement Works, a little up Senora Road from there." <<std::endl;
}

Harl::~Harl(void)
{

}