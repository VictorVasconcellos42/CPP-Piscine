/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 09:49:22 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/08/03 14:42:05 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	type = "Undefined";
	std::cout << "Animal Constructor Start!" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
}

Animal	&Animal::operator=(const Animal &src)
{
	if (this != &src)
		this->type = src.getType();
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal die!" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void	Animal::setType(std::string newType)
{
	this->type = newType;
}

void	Animal::makeSound(void) const
{
	std::cout << "I have no idea what the hell I should do :c" << std::endl;
}

