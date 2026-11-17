/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 14:15:36 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/17 09:30:22 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>

Base	*generate(void)
{
	time_t	random = time(&random) % 3;

	if (random == 0)
	{
		A	*a = new A;
		return dynamic_cast<Base*>(a);
	}
	else if (random == 1)
	{
		B	*b = new B;
		return dynamic_cast<Base*>(b);
	}
	else
	{
		C	*c = new C;
		return dynamic_cast<Base*>(c);
	}
}
