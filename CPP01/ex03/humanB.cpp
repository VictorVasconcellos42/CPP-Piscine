/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 01:56:21 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/18 04:43:09 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

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

void HumanB::setWeapon(Weapon weapon)
{
	Weapon *weaponPTR = new Weapon(weapon);
	this->weapon = weaponPTR;
}