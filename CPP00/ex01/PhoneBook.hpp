/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 15:13:36 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/04/22 17:14:59 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook

{
	public:
	    PhoneBook();
		~PhoneBook();

		void addContact(void);
		void searchList(Contact *contact, int amountOfContactC);
		std::string	handlerString(std::string name);

	private:
	    Contact contact[8];
		int	 	amountOfContact;
};

#endif