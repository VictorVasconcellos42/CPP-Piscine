/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 11:56:46 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/08/03 07:33:21 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string newName): ClapTrap(newName)
{
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	this->name = newName;
	std::cout << "\e[35;10m" << "FragTrap " << this->name << " Created!" <<  "\e[m" << std::endl;
}

FragTrap::FragTrap(void)
{
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	this->name = "thfirmin";
	std::cout << "\e[35;10m" << "FragTrap thfirmin Created!" <<  "\e[m" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	*this = src;
}

FragTrap	&FragTrap::operator=(const FragTrap &src)
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

FragTrap::~FragTrap()
{
	std::cout << "\e[35;10m" << "FragTrap " << this->getName() << " die" <<  "\e[m" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "\e[35;10m" << "One, Two, three.... Hi five!" << "\e[m" << std::endl;
}