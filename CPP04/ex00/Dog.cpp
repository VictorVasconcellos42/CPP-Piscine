/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 10:12:34 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/29 11:15:18 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal()
{
	type = "Dog";
	std::cout << "Dog Constructor Start!" << std::endl;
}

Dog::Dog(const Dog &copy): Animal()
{
	*this = copy;
}

Dog	&Dog::operator=(const Dog &src)
{
	if (this != &src)
		this->type = src.getType();
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog die! Woof :c" << std::endl;
}

void	Dog::makeSound(void)
{
	std::cout << "Woof Woof" << std::endl;
}