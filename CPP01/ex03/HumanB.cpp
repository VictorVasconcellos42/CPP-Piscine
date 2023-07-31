/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 01:56:21 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/31 17:54:02 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void): weapon(nullptr)
{
	this->name = "Vasquinho";
}

HumanB::HumanB(std::string name) : name(name) , weapon(nullptr)
{
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << this->name << " left your weapon" << std::endl;
	delete this->weapon;
	return ;
}

void HumanB::attack()
{
	if (weapon != nullptr)
		std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << this->name << " attacks with their bare hands" << std::endl;
}

Weapon*	HumanB::getWeapon(void) const
{
	return (this->weapon);
}

std::string	HumanB::getName(void) const
{
	return (this->name);
}

void	HumanB::setName(std::string newName)
{
	this->name = newName;
}

void HumanB::setWeapon(Weapon weapon)
{
	Weapon *weaponPTR = new Weapon(weapon);
	this->weapon = weaponPTR;
}