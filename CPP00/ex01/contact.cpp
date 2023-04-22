/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:08:12 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/04/22 17:30:05 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)

{
}

Contact::~Contact(void)

{
}

std::string Contact::getFirstName(void) const

{
	return (firstName);
}

std::string Contact::getLastName(void) const

{
	return (lastName);
}

std::string Contact::getNickName(void) const

{
	return (nickName);
}

std::string Contact::getPhoneNumber(void) const

{
	return (phoneNumber);
}

std::string Contact::getDarkestSecret(void) const

{
	return (darkestSecret);
}


void	Contact::setFirstName(const std::string s)

{
    firstName = s;
}

void	Contact::setLastName(const std::string s)

{
    lastName = s;
}

void	Contact::setNickName(const std::string s)

{
    nickName = s;
}

void	Contact::setDarkestSecret(const std::string s)

{
    darkestSecret = s;
}

void	Contact::setPhoneNumber(const std::string s)

{
    phoneNumber = s;
}