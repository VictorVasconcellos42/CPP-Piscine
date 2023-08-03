/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 09:38:09 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/08/03 14:42:01 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal(void);
		Animal(const Animal &copy);
		Animal&operator=(const Animal &src);
		virtual ~Animal();
		std::string		getType(void) const;
		void			setType(std::string	newType);
		virtual void	makeSound(void) const ;
};