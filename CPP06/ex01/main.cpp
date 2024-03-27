/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 22:59:35 by vde-vasc          #+#    #+#             */
/*   Updated: 2024/03/26 23:00:51 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data data;
	data.role = "Warrior";
	data.power = 100;

	std::cout << "Data Structure Adress: " << &data << std::endl;
	uintptr_t raw = Serializer::serialize(&data);
	std::cout << "Serialized Data: " << raw << std::endl;
	Data *ptr = Serializer::deserialize(raw);
	std::cout << "Deserialized Data Adress: " << ptr << std::endl;
	return 0;
}