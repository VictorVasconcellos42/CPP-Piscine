/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 10:33:00 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/29 16:45:39 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	Animal *array[2];

	array[0] = new Dog;
	array[0]->makeSound();
	array[1] = new Cat;
	array[1]->makeSound();
	for (int i = 0; i < 2; i++)
		delete array[i];
	return 0;
}