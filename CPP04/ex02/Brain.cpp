/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:24:58 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/31 15:35:01 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Finally! Brain costructor started" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Default ideal";
}

Brain::Brain(const Brain &cpy)
{
	std::cout << "Brain Copy Constructor Called" << std::endl;
	*this = cpy;
}

Brain &Brain::operator=(const Brain &src)
{
	if (this != &src)
	{
		for (int i = 0; i < (int)this->ideas->length(); i++)
			this->ideas[i] = src.ideas[i];
	}
	std::cout << "Brain Assign Operator Called" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "The brain has been destroyed" << std::endl;
}

std::string	Brain::getOneIdeal(unsigned int i) const
{
	return (this->ideas[i]);
}

void		Brain::setOneIdeal(std::string ideal, unsigned int i)
{
	this->ideas[i] = ideal;
}
