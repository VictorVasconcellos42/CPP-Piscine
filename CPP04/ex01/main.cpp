/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 10:33:00 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/29 15:47:32 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	Animal *array[10];

	for (int i = 0; i < 5; i++)
		array[i] = new Dog;
	for (int i = 25; i < 10; i++)
		array[i] = new Cat;
	for (int i = 0; i < 10; i++)
		delete array[i];
	return 0;
}