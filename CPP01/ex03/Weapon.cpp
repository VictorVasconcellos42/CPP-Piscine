/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 01:48:09 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/31 17:50:40 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "Weapon Default Constructor Called" << std::endl;
	this->type = "hands";
}

Weapon::Weapon(std::string name) : type(name)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

std::string	Weapon::getType(void) const
{
	return (this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
