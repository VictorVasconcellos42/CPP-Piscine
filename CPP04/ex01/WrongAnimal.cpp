/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 11:30:16 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/29 15:17:24 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	type = "Undefined";
	std::cout << "WrongAnimal Constructor Start!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &src)
{
	if (this != &src)
		this->type = src.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal die!" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::setType(std::string newType)
{
	this->type = newType;
}

void	WrongAnimal::makeSound(void)
{
	std::cout << "What on earth would a wrong animal sound like?" << std::endl;
}
