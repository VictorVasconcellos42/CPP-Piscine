/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:06:07 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/17 23:01:29 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
private:
	Contact		contact[8];
	int			index;
	static int	count;
public:
	PhoneBook();
	~PhoneBook();

	void	addContact(Contact contact);
	void	insertContact(void);
	void	searchContact(void);
};


#endif