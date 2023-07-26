/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 01:58:15 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/26 02:20:12 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractBits = 8;


Fixed::Fixed() : fixedPointerValue(0)
{
	std::cout << "----- [Default Constructor called] -----" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "----- [Copy Constructor Called] ------" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator =(const Fixed &src)
{
	std::cout << "----- [Assignment Operator Constructor called] -----" << std::endl;
	if (this != &src)
		this->fixedPointerValue = src.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "---- [OMG!!! Desconstructor called] ----" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "---- [getRawBits member function called] ----" << std::endl;
	return (this->fixedPointerValue);
}

void	Fixed::setRawBits(int const rawBits)
{
	this->fixedPointerValue = rawBits;
}