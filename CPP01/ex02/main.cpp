/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 00:51:18 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/18 01:03:52 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";

	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "Variable Address: " << &brain << std::endl;
	std::cout << "Pointer Address: " << &(*stringPTR) << std::endl;
	std::cout << "Reference Address: " << &stringREF << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "Variable Value: " << brain << std::endl;
	std::cout << "Pointer to Value in Brain: " << *stringPTR << std::endl;
	std::cout << "Reference to Value in Brain: " << stringREF << std::endl;
	std::cout << "-------------------------------------" << std::endl;

	return (0);
}