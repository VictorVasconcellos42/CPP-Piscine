/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 10:12:05 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/08/03 14:43:04 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal()
{
	this->type = "Cat";
	this->brain = new Brain;
	std::cout << "Cat Constructor Start!" << std::endl;
}

Cat::Cat(const Cat &copy): Animal()
{
	*this = copy;
}

Cat	&Cat::operator=(const Cat &src)
{
	if (this != &src)
	{
		if (this->brain)
		{
			delete this->brain;
			this->brain = nullptr;
		}
		if (src.brain)
			this->brain = new Brain(*src.brain);
		this->type = src.getType();
	}
	return (*this);
}

Cat::~Cat(void)
{
	delete this->brain;
	std::cout << "Cat die! Shut up mother cat" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << this->getType() << ": Meow Meow :3" << std::endl;
}

