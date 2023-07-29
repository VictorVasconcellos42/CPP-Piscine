/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:00:29 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/28 12:41:35 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap one("Vasco");
	FragTrap two("Lohan");
	FragTrap three = one;
	std::cout << "--------------------------------STATUS----------------------" << std::endl;
	one.attack(two.getName());
	two.takeDamage(one.getAttackDamage());
	two.attack(one.getName());
	one.takeDamage(two.getAttackDamage());
	three.setName("Vasquinho 2");
	std::cout << "Hello, I'm " << three.getName() << " ! " << std::endl;
	return (0);
}