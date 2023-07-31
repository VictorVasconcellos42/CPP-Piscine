/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 00:02:02 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/31 17:27:49 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Human Coder Zombie Created!!" << std::endl;
	return ;
}

Zombie::~Zombie()
{
	std::cout << this->name << " is dead" << std::endl;
	return ;
}

Zombie::Zombie(std::string name): name(name)
{
	std::cout << this->name << " Zombie Created!!" << std::endl;
}

std::string	Zombie::getZombieName(void) const
{
	return (this->name);
}

void Zombie::setZombieName(std::string name)
{
	this->name = name;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}