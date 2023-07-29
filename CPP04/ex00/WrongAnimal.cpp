/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 11:30:16 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/29 11:30:55 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	type = "Undefined";
	std::cout << "Animal Constructor Start!" << std::endl;
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
	std::cout << "Animal die!" << std::endl;
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
	std::cout << "I have no idea what the hell I should do :c" << std::endl;
}
