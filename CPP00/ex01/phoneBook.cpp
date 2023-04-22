/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:12:42 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/04/22 17:37:25 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

PhoneBook::PhoneBook()

{
    amountOfContact = 0;
}

PhoneBook::~PhoneBook()

{
}

void    PhoneBook::addContact(void)

{
    for (int i = 7; i > 0; i--)
    {
        contact[i].setFirstName(contact[i - 1].getFirstName());
        contact[i].setLastName(contact[i - 1].getLastName());
        contact[i].setNickName(contact[i - 1].getNickName());  
        contact[i].setPhoneNumber(contact[i - 1].getPhoneNumber());
        contact[i].setDarkestSecret(contact[i - 1].getDarkestSecret());
    }
    contact[0].setFirstName("Victor");
    contact[0].setLastName("Vasconcellos");
    contact[0].setNickName("Victor");  
    contact[0].setPhoneNumber("Victor");
    contact[0].setDarkestSecret("Victor");
}