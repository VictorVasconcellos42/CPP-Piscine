/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 10:33:00 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/31 16:12:13 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	Animal *array[3];

	array[0] = new Cat;
	array[1] = new Dog;
	array[2] = array[1];
	
	std::cout << "------------------------------------------" << std::endl;	
	for (int i = 0; i < 3; i++)
	{

		std::cout << "Array " << i << " Type: " << array[i]->getType() << std::endl;
		array[i]->makeSound();
		std::cout << "------------------------------------------" << std::endl;	
	}
	Cat Vasco;

	Vasco.setType("Caramelo");
	Cat Firmino;
	Firmino = Vasco;
	std::cout << "------------------------------------------" << std::endl;	
	for (int i = 0; i < 1; i++)
	{
		std::cout << "Array " << i << " Type: " << Firmino.getType() << std::endl;
		Firmino.makeSound();
		std::cout << "------------------------------------------" << std::endl;
		std::cout << "Array " << i << " Type: " << Vasco.getType() << std::endl;
		Vasco.makeSound();
		std::cout << "------------------------------------------" << std::endl;	
	}
	return 0;
}