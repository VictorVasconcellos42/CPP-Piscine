/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:34:39 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/28 13:24:55 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	hitPoint = 10;
	energyPoint = 10;
	attackDamage = 0;
	name = "Vasquinho";
	std::cout << "ClapTrap Vasquinho Created!" << std::endl;
}

ClapTrap::ClapTrap(std::string newName) : name(newName)
{
	hitPoint = 10;
	energyPoint = 10;
	attackDamage = 0;
	std::cout << "ClapTrap " << name << " Created!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " Destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
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

unsigned int ClapTrap::getAttackDamage(void) const
{
	return (this->attackDamage);
}

unsigned int ClapTrap::getEnergyPoint(void) const
{
	return (this->energyPoint);
}

unsigned int ClapTrap::getHitPoint(void) const
{
	return (this->hitPoint);
}

std::string ClapTrap::getName(void) const
{
	return (this->name);
}

void	ClapTrap::setAttackDamage(unsigned int value)
{
	this->attackDamage = value;
}

void	ClapTrap::setEnergyPoint(unsigned int value)
{
	this->energyPoint = value;
}

void	ClapTrap::setHitPoint(unsigned int value)
{
	this->hitPoint = value;
}

void	ClapTrap::setName(std::string newName)
{
	this->name = newName;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->getEnergyPoint() > 0 && this->getHitPoint() != 0)
	{
		std::cout << "ClapTrap " << this->getName() << " attack " << target << " causing " << this->getAttackDamage() << " points of damage!" << std::endl;
		this->setEnergyPoint(this->energyPoint - 1);
		return ;
	}
	std::cout << "Hey " << this->getName() << ", you don't have enough energy or hit points" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > 0 && this->getHitPoint() != 0)
	{
		int	diff;
		std::cout << "ClapTrap " << this->getName() << " lost " << amount << " life points" << std::endl;
		diff = this->getHitPoint() - amount;
		if (diff < 0)
			this->setHitPoint(0);
		else
			this->setHitPoint(this->getHitPoint() - amount);
		return ;
	}
	switch (this->getHitPoint())
	{
		case 0:
			std::cout << "Damn, I'm already dead" << std::endl;
			break ;
		default:
			std::cout << "Really? 0 of Attack Damage? I can do this all day" << std::endl;
			break ;
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getEnergyPoint() != 0 && this->getHitPoint() != 0)
	{
		std::cout << "ClapTrap " << this->getName() << "recovered " << amount << "life points" << std::endl;
		this->setHitPoint(this->getHitPoint() + amount);
		this->setEnergyPoint(this->getEnergyPoint() - 1);
		return ;
	}
	std::cout << "You don't have enough energy or hit points" << std::endl;
	return ;
}