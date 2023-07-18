/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 01:33:45 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/17 21:02:26 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	update(PhoneBook &phonebook)
{
	Contact aux;
	std::string input;

	std::cout << "Please enter the contact's first name: ";
	std::getline(std::cin, input);
	std::cout << "INPUT VALUE: " << input << std::endl;
	aux.setFirstName(input);
	
	std::cout << "Please enter the contact's last name: ";
	std::getline(std::cin, input);
	std::cout << "INPUT VALUE: " << input << std::endl;
	aux.setLastName(input);
	
	std::cout << "Please enter the contact's nickname: ";
	std::getline(std::cin, input);
	std::cout << "INPUT VALUE: " << input << std::endl;
	aux.setNickname(input);
	
	std::cout << "Please, tell me your PhoneNumber!: ";
	std::getline(std::cin, input);
	std::cout << "INPUT VALUE: " << input << std::endl;
	aux.setPhoneNumber(input);
	
	std::cout << "Please, tell me your darkest secret!: ";
	std::getline(std::cin, input);
	aux.setDarkestSecret(input);
	std::cout << "INPUT VALUE: " << input << std::endl;
	phonebook.addContact(aux);
}

void	search(PhoneBook &phoneBook)
{
	Contact	contact[8];
	std::string input;
	int		i, count;


	count = phoneBook.getCount();
	std::cout << "		   PHONEBOOK" << std::endl;
	for (int index = 0; index < count; index++)
	{
		contact[index] = phoneBook.getContact(index);
		std::cout << "INDEX: " << index << ": " << contact[index].getFirstName() << " " << contact[index].getLastName() << std::endl;
	}
	std::cout << "Please enter the index of the contact you want to see: ";
	std::getline(std::cin, input);
	if (input < "0" || input > "7")
		std::cout << "Invalid index. Please try again." << std::endl;
	else
	{
		i = std::stoi(input);
		contact[i] = phoneBook.getContact(i);
		std::cout << "\n\n"
			<< "[Name   | Last Name   | NickName  |   Number   | Secret ]" << std::endl
			<< contact[i].getFirstName() << " | "
			<< contact[i].getLastName() << " | "
			<< contact[i].getNickname() << " | "
			<< contact[i].getPhoneNumber() << " | "
			<< contact[i].getDarkestSecret() << " | " << std::endl;
	}
}

int main(void)
{
	PhoneBook phoneBook;
	std::string operation;

	std::cout << "WELCOME TO THE PHONEBOOK" << std::endl;
	while (1)
	{
		std::cout << "Please enter a command: ADD, SEARCH or EXIT: ";
		std::getline(std::cin, operation);
		std::cout << "OPERATION VALUE: " << operation << std::endl;
		if (operation == "ADD")
			update(phoneBook);
		else if (operation == "SEARCH")
			search(phoneBook);
		else if (operation == "EXIT")
			break ;
		else
			std::cout << "Invalid command. Please try again." << std::endl;
	}
	return (0);
}