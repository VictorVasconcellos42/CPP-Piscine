/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 01:28:21 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/22 14:13:50 by vde-vasc         ###   ########.fr       */
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
	aux.setFirstName(input);
	
	std::cout << "Please enter the contact's last name: ";
	std::getline(std::cin, input);
	aux.setLastName(input);
	
	std::cout << "Please enter the contact's nickname: ";
	std::getline(std::cin, input);
	aux.setNickname(input);
	
	std::cout << "Please, tell me your PhoneNumber!: ";
	std::getline(std::cin, input);
	aux.setPhoneNumber(input);
	
	std::cout << "Please, tell me your darkest secret!: ";
	std::getline(std::cin, input);
	aux.setDarkestSecret(input);

	this->contact[this->index] = aux;
	if (count < 8)
		count++;
	this->index = (this->index + 1) % 8;
}

std::string	PhoneBook::truncate(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return (str);
}

int PhoneBook::vt_stoi(std::string& str)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    if (str[0] == '-')
	{
        sign = -1;
        i = 1;
    }
    while (str[i] != '\0')
	{
        char digit = str[i];
        if (digit >= '0' && digit <= '9') {
            result = result * 10 + (digit - '0');
        } else {
            std::cerr << "Erro" << std::endl;
            return 0;
        }
        i++;
    }

    return (result * sign);
}

void	PhoneBook::searchContact(void)
{
	std::string input;
	int		i;
	int		number;


	std::cout << "		   PHONEBOOK" << std::endl;
	if (count == 0)
	{
		std::cout << "No contacts to show. Please add a contact first." << std::endl;
		return ;
	}
	for (int index = 0; index < count; index++)
		std::cout << "INDEX: " << index << ": " << truncate(this->contact[index].getFirstName()) << " " << truncate(this->contact[index].getLastName()) << std::endl;
	while (1)
	{
		std::cout << "Please enter the index of the contact you want to see: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit (0);
		if (input == "EXIT")
			break ;
		number = vt_stoi(input);
		if ((number < 0 || number > 7) || input.length() > 1)
		{
			std::cout << "Invalid index. Please try again." << std::endl;
			continue ;
		}
		else
		{
			i = vt_stoi(input);
			std::cout << "\n\n"
				<< "[Name   | Last Name   | NickName  |   Number   | Secret ]" << std::endl
				<< truncate(this->contact[i].getFirstName()) << " | "
				<< truncate(this->contact[i].getLastName()) << " | "
				<< truncate(this->contact[i].getNickname()) << " | "
				<< truncate(this->contact[i].getPhoneNumber()) << " | "
				<< truncate(this->contact[i].getDarkestSecret()) << " | " << std::endl;
		}
	}
}

int PhoneBook::count = 0;