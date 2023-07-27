/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:00:29 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/27 17:12:42 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap peter("Peter Parker");
	ClapTrap harry("Harry Osborn");

	peter.setAttackDamage(2);
	harry.setAttackDamage(1);
	std::cout << "----------------------------------------------------------" << std::endl;
	std::cout << "Harry Attack Damage: " << harry.getAttackDamage() << std::endl;
	std::cout << "Peter Park (also Spider-man) Attack Damage: " << peter.getAttackDamage() << std::endl;
	
	peter.attack(harry.getName());
	harry.takeDamage(peter.getAttackDamage());
	std::cout << "Harry life " << harry.getHitPoint() << std::endl;
	peter.attack(harry.getName());
	harry.takeDamage(peter.getAttackDamage());
	std::cout << "Harry life " << harry.getHitPoint() << std::endl;
	peter.attack(harry.getName());
	std::cout << "Harry life " << harry.getHitPoint() << std::endl;
	harry.takeDamage(peter.getAttackDamage());
	std::cout << "Harry life " << harry.getHitPoint() << std::endl;
	peter.attack(harry.getName());
	harry.takeDamage(peter.getAttackDamage());
	std::cout << "Harry life " << harry.getHitPoint() << std::endl;
	peter.attack(harry.getName());
	harry.takeDamage(peter.getAttackDamage());
	std::cout << "Harry life " << harry.getHitPoint() << std::endl;
	peter.attack(harry.getName());
	harry.takeDamage(peter.getAttackDamage());
	std::cout << "Harry life " << harry.getHitPoint() << std::endl;
	peter.attack(harry.getName());
	harry.takeDamage(peter.getAttackDamage());
	std::cout << "Harry life " << harry.getHitPoint() << std::endl;
	peter.attack(harry.getName());
	harry.takeDamage(peter.getAttackDamage());
	std::cout << "Harry life " << harry.getHitPoint() << std::endl;
	peter.attack(harry.getName());
	harry.takeDamage(peter.getAttackDamage());
	std::cout << "Harry life " << harry.getHitPoint() << std::endl;
	peter.attack(harry.getName());
	harry.takeDamage(peter.getAttackDamage());
	std::cout << "Harry life " << harry.getHitPoint() << std::endl;
	peter.attack(harry.getName());
	harry.takeDamage(peter.getAttackDamage());
	std::cout << "Harry life " << harry.getHitPoint() << std::endl;
	peter.attack(harry.getName());
	harry.takeDamage(peter.getAttackDamage());
	std::cout << "Harry life " << harry.getHitPoint() << std::endl;
	peter.attack(harry.getName());
	harry.takeDamage(peter.getAttackDamage());
	std::cout << "Harry life " << harry.getHitPoint() << std::endl;
	peter.attack(harry.getName());
	harry.takeDamage(peter.getAttackDamage());
	std::cout << "Harry life " << harry.getHitPoint() << std::endl;
	return (0);
}