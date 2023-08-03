/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 09:47:46 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/08/03 14:42:52 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
class Dog: public Animal
{
	private:
		Brain *brain;
	public:
		Dog(void);
		Dog(const Dog &cpy);
		Dog&operator=(const Dog &src);
		~Dog();
		void	makeSound(void) const;	
};