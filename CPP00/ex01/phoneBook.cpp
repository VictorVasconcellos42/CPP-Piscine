/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 01:28:21 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/17 21:03:06 by vde-vasc         ###   ########.fr       */
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

int PhoneBook::count = 0;

void	PhoneBook::addContact(Contact contact)
{
	this->array[this->index] = contact;
	if (count < 8)
		count++;
	this->index = (this->index + 1) % 8;
}

Contact	PhoneBook::getContact(int i) const
{
	return (this->array[i]);	
}

int PhoneBook::getCount() const
{
	return (this->count);
}
