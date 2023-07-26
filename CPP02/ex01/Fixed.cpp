/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 01:58:15 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/26 03:38:29 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractBits = 8;

Fixed::Fixed(void): fixedPointerValue(0)
{
	std::cout << "----- [Default Constructor called] -----" << std::endl;
}

Fixed::Fixed(const int intNumber): fixedPointerValue(intNumber * 256)
{
	std::cout << "----- [Int Constructor called] -----" << std::endl;
}

Fixed::Fixed(const float floatNumber) 
{
	fixedPointerValue = static_cast<int>(std::roundf(floatNumber * (1 << this->fractBits)));
	std::cout << "----- [Float Constructor called] -----" << std::endl;
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

std::ostream &operator<<(std::ostream &out, const Fixed &src)
{
	float	result;

	result = (float)src.getRawBits() / 256.0f;
	out << result;
	return (out);
}

Fixed::~Fixed()
{
	std::cout << "---- [OMG!!! Desconstructor called] ----" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	return (this->fixedPointerValue);
}

void	Fixed::setRawBits(int const rawBits)
{
	this->fixedPointerValue = rawBits;
}

float	Fixed::toFloat(void) const
{
	float	result;

	result = (float)this->fixedPointerValue / (float)(1 << this->fractBits);
	return (result);
}

int		Fixed::toInt(void) const
{
	int	result;

	result = getRawBits() >> this->fractBits;
	return (result);
}