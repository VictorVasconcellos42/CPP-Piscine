/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 00:11:41 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/18 00:15:47 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "randomChump.cpp"
#include "newZombie.cpp"	

int	main(void)
{
	Zombie	human_code;
	Zombie	*robot_code;

	human_code.setZombieName("Joao Vitor");
	human_code.announce();

	robot_code = newZombie("Thiago Firmino");
	robot_code->announce();
	randomChump("Victor Vasconcellos");
	delete robot_code;
	return (0);
}
