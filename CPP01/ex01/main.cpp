/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 00:41:32 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/18 00:46:34 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "zombieHorder.cpp"

int	main(void)
{
	Zombie	*humanCode =	zombieHorder(10, "Joao Vitor");
	Zombie	*robotCode = zombieHorder(10, "Thiago Firmino");
	Zombie	*randomCode = zombieHorder(10, "Victor Vasconcellos");

	for (int i = 0; i < 10; i++)
		humanCode[i].announce();
	for (int i = 0; i < 10; i++)
		robotCode[i].announce();
	for(int i = 0; i < 10; i++)
		randomCode[i].announce();

	delete [] humanCode;
	delete [] robotCode;
	delete [] randomCode;
}