/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:06:07 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/22 13:54:27 by vde-vasc         ###   ########.fr       */
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

	void		addContact(Contact contact);
	std::string	truncate(std::string str);
	int			vt_stoi(std::string& str);
	void		insertContact(void);
	void		searchContact(void);
};


#endif