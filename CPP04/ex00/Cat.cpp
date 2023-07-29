/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 10:12:05 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/29 11:15:46 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal()
{
	this->type = "Cat";
	std::cout << "Cat Constructor Start!" << std::endl;
}

Cat::Cat(const Cat &copy): Animal()
{
	*this = copy;
}

Cat	&Cat::operator=(const Cat &src)
{
	if (this != &src)
		this->type = src.getType();
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat die! Shut up mother cat" << std::endl;
}

void	Cat::makeSound(void)
{
	std::cout << "Meow Meow Nigga" << std::endl;
}

