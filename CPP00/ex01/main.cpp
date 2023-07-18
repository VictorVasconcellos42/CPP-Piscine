/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 01:33:45 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/17 23:08:01 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phoneBook;
	std::string operation;

	std::cout << "WELCOME TO THE PHONEBOOK" << std::endl;
	while (1)
	{
		std::cout << "Please enter a command: ADD, SEARCH or EXIT: ";
		if (std::cin.eof())
			break ;
		std::getline(std::cin, operation);
		if (operation == "ADD")
			phoneBook.insertContact();
		else if (operation == "SEARCH")
			phoneBook.searchContact();
		else if (operation == "EXIT")
			break ;
		else
			std::cout << "Invalid command. Please try again." << std::endl;
	}
	return (0);
}