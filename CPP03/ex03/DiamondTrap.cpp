/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 18:30:14 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/28 20:47:10 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
	FragTrap::setHitPoint(100);
	ScavTrap::setEnergyPoint(50);
	FragTrap::setAttackDamage(30);
	this->name = "Vasquinho";
	std::cout << "DiamondTrap Vasquinho Created!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string newName): ClapTrap(newName + "_clap_name"), ScavTrap(newName), FragTrap(newName)
{
	this->name = newName;
	FragTrap::setHitPoint(100);
	ScavTrap::setEnergyPoint(50);
	FragTrap::setAttackDamage(30);
	std::cout << "DiamondTrap " << name << " Created!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " Destroyed!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src): ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	*this = src;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	if (this != &src)
	{
		setName(src.getName());
		setHitPoint(src.getHitPoint());
		setEnergyPoint(src.getEnergyPoint());
		setAttackDamage(src.getAttackDamage());
	}
	return (*this);
}

std::string DiamondTrap::getName(void) const
{
	return (this->name);
}

void DiamondTrap::setName(std::string newName)
{
	this->name = newName;
}

void	DiamondTrap::setClapTrapName(std::string name)
{
	this->ClapTrap::name = name;
}

std::string	DiamondTrap::getClapTrapName(void) const
{
	return (ClapTrap::name);
}

void	DiamondTrap::whoIAm(void)
{
	if (this->energyPoint != 0)
	{
		std::cout << "Hello, I'm " << this->name << " DiamondTrap and He's " << this->getClapTrapName() << " ClapTrap!" << std::endl;
	}
	else
		std::cout << "Dude, you don't have enough energy or life points" << std::endl;
}