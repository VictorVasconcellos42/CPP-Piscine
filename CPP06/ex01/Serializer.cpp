/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 22:57:45 by vde-vasc          #+#    #+#             */
/*   Updated: 2024/03/26 22:58:08 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

Serializer::Serializer(void)
{
};

Serializer::~Serializer(void)
{
};

Serializer::Serializer(const Serializer &copy)
{
	*this = copy;
};

Serializer &Serializer::operator=(const Serializer &src)
{
	if (this != &src)
		*this = src;
	return (*this);
};
