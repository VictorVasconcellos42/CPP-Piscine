/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:00:29 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/28 20:34:47 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap one("Vasco");
	DiamondTrap two("Lohan");
	std::cout << "--------------------------------STATUS VASCO----------------------" << std::endl;
	std::cout << one.getName() << " Hit points: " << one.getHitPoint() << std::endl;
	std::cout << one.getName() << " Attack Damage: " << one.getAttackDamage() << std::endl;
	std::cout << one.getName() << " Energy Points: " << one.getEnergyPoint() << std::endl;
	std::cout << "--------------------------------STATUS LOHAN----------------------" << std::endl;
	std::cout << two.getName() << " Hit points: " << two.getHitPoint() << std::endl;
	std::cout << two.getName() << " Attack Damage: " << two.getAttackDamage() << std::endl;
	std::cout << two.getName() << " Energy Points: " << two.getEnergyPoint() << std::endl;
	one.attack(two.getName());
	two.takeDamage(one.getAttackDamage());
	two.attack(one.getName());
	one.takeDamage(two.getAttackDamage());
	return (0);
}


//attack Damage = 30
//Energy points = 50;
//Hit points = 100