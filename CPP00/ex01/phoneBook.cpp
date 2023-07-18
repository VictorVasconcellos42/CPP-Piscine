/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 01:28:21 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/17 23:39:43 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
	count = 0;
	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}

void	PhoneBook::insertContact(void)

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

	this->contact[this->index] = aux;
	if (count < 8)
		count++;
	this->index = (this->index + 1) % 8;
}

void	PhoneBook::searchContact(void)
{
	std::string input;
	int		i;


	std::cout << "		   PHONEBOOK" << std::endl;
	for (int index = 0; index < count; index++)
		std::cout << "INDEX: " << index << ": " << this->contact[index].getFirstName() << " " << this->contact[index].getLastName() << std::endl;
	std::cout << "Please enter the index of the contact you want to see: ";
	std::getline(std::cin, input);
	if (input < "0" || input > "7")
		std::cout << "Invalid index. Please try again." << std::endl;
	else
	{
		i = std::stoi(input);
		std::cout << "\n\n"
			<< "[Name   | Last Name   | NickName  |   Number   | Secret ]" << std::endl
			<< this->contact[i].getFirstName() << " | "
			<< this->contact[i].getLastName() << " | "
			<< this->contact[i].getNickname() << " | "
			<< this->contact[i].getPhoneNumber() << " | "
			<< this->contact[i].getDarkestSecret() << " | " << std::endl;
	}
}

int PhoneBook::count = 0;