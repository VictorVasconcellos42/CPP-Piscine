/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:00:29 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/28 11:41:38 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap one("Vasco");
	ScavTrap two("Lohan");
	ScavTrap three = one;
	std::cout << "--------------------------------STATUS----------------------" << std::endl;
	one.attack(two.getName());
	two.takeDamage(one.getAttackDamage());
	two.attack(one.getName());
	one.takeDamage(two.getAttackDamage());
	one.beRepaired(3);
	one.guardGate();
	three.setName("Vasquinho 2");
	std::cout << "Hello, I'm " << three.getName() << " ! " << std::endl;
	return (0);
}