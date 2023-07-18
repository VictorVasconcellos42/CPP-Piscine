/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:06:07 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/17 20:12:34 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
private:
	Contact		array[8];
	int			index;
	static int	count;
public:
	PhoneBook();
	~PhoneBook();

	void addContact(Contact contact);
	Contact getContact(int i) const;
	int getCount() const;
};


#endif