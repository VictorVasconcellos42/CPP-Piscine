/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 07:11:08 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/28 13:21:50 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->name = "Peter Parker";
	std::cout << "\e[31;10m" << "ScavTrap " << this->name << " Created!" <<  "\e[m" << std::endl;
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string newName) : ClapTrap(newName)
{
	std::cout << "\e[31;10m" << "ScavTrap " << newName << " Created!" <<  "\e[m" << std::endl;
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &cpy) : ClapTrap(cpy)
{
	*this = cpy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	if (this != &src)
	{
		this->name = src.getName();
		this->hitPoint = src.getHitPoint();
		this->energyPoint = src.getEnergyPoint();
		this->attackDamage = src.getAttackDamage();
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "\e[31;10m" << "ScavTrap " << this->getName() << " Destroyed!" <<  "\e[31;9m\e[m" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->getEnergyPoint() > 0 && this->getHitPoint() != 0)
	{
		std::cout << "\e[31;10m" << "ScavTrap " << this->getName() << " uses Blast Burn on the " << target << " causing " << this->getAttackDamage() << " points of damage!" << "\e[m" << std::endl;
		this->setEnergyPoint(this->getEnergyPoint() - 1);
		return ;
	}
	std::cout << "Hey " << this->getName() << ", you don't have enough energy or hit points" << std::endl;
	return ;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "\e[31;10m" << "ScavTrap " << this->getName() << " have enterred in Gate keeper mode." <<  "\e[m" << std::endl;
}