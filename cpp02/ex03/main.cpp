/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 15:54:57 by neda-sil          #+#    #+#             */
/*   Updated: 2026/10/28 19:33:21 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp(const Point &A, const Point &B, const Point &C, const Point &pnt);

int	main(void)
{
	Point a(-1, 1), b(2, 5), c(3, 2), pnt(2, 1);
	
	bsp(a, b, c, pnt);
}

/* expected output:

$> ./a.out
0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
10.1016

*/