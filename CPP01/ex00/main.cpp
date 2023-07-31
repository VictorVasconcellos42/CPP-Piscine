/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 00:11:41 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/31 17:35:01 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "randomChump.cpp"
#include "newZombie.cpp"	

int	main(void)
{
	Zombie	humanCode("Joao Vitor");
	Zombie	*robotCode;

	std::cout << "Zombie Normal Status: " << std::endl;
	std::cout << "Name: " << humanCode.getZombieName() << std::endl;
	humanCode.announce();
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "Zombie Pointer Status: " << std::endl;
	robotCode = newZombie("Thiago Firmino");
	std::cout << "Name: " << robotCode->getZombieName() << std::endl;	
	robotCode->announce();
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "Zombie Reference Status: " << std::endl;
	randomChump("Victor Vasconcellos");
	std::cout << "------------------------------------------" << std::endl;
	delete robotCode;
	return (0);
}
