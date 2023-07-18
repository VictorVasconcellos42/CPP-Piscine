/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 03:38:16 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/18 04:06:23 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	{	
		Weapon club = Weapon("Knife");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("Gun");
		bob.attack();
	}
	{
		Weapon club = Weapon("Minigun");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		club.setType("Two Minigun!");
		jim.attack();
	}
	return 0;
}