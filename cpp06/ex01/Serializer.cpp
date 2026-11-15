/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 18:48:54 by neda-sil          #+#    #+#             */
/*   Updated: 2026/11/15 19:24:39 by neda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// Static functions

uintptr_t	Serializer::serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

// Constructors and Destructors

Serializer::Serializer()
{

}

Serializer::Serializer(const Serializer &other)
{
	*this = other;
}

Serializer &Serializer::operator=(const Serializer &other)
{
	if (this != &other)
	{
		*this = other;
	}
	return *this;
}

Serializer::~Serializer()
{

}
