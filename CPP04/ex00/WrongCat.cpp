/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 11:23:14 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/29 11:28:35 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal()
{
	this->type = "Cat";
	std::cout << "Cat Constructor Start!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal()
{
	*this = copy;
}

WrongCat	&WrongCat::operator=(const WrongCat &src)
{
	if (this != &src)
		this->type = src.getType();
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "Help me! Wrong Cat die! Shut up mother cat" << std::endl;
}

void	WrongCat::makeSound(void)
{
	std::cout << "Meow Meow Nigga" << std::endl;
}
