/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 10:12:34 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/08/03 14:43:00 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal()
{
	type = "Dog";
	this->brain = new Brain;
	std::cout << "Dog Constructor Start!" << std::endl;
}

Dog::Dog(const Dog &copy): Animal()
{
	*this = copy;
}

Dog	&Dog::operator=(const Dog &src)
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

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog die! Woof :c" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << this->getType() << ": Woof Woof :)" << std::endl;
}