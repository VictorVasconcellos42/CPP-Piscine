/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 01:58:15 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/08/01 23:46:40 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractBits = 8;

Fixed::Fixed(void): fixedPointerValue(0)
{
}

Fixed::Fixed(const int intNumber): fixedPointerValue(intNumber * 256)
{
}

Fixed::Fixed(const float floatNumber) 
{
	fixedPointerValue = static_cast<int>(std::roundf(floatNumber * (1 << this->fractBits)));
}

Fixed::Fixed(const Fixed& copy)
{
	*this = copy;
}

bool Fixed::operator>(const Fixed &src)
{
	if (src.getRawBits() > this->fixedPointerValue)
		return (1);
	return (0);
}

bool Fixed::operator<(const Fixed &src)
{
	if (src.getRawBits() < this->fixedPointerValue)
		return (1);
	return (0);
}

bool Fixed::operator!=(const Fixed &src)
{
	if (src.getRawBits() != this->fixedPointerValue)
		return (1);
	return (0);
}

bool Fixed::operator==(const Fixed &src)
{
	if (src.getRawBits() == this->fixedPointerValue)
		return (1);
	return (0);
}

Fixed Fixed::operator+(const Fixed &a)
{
	Fixed	result;

	result.setRawBits(this->fixedPointerValue + a.getRawBits());
	return (result);
}

Fixed Fixed::operator-(const Fixed &a)
{
	Fixed	result;

	result.setRawBits(this->fixedPointerValue - a.getRawBits());
	return (result);
}

Fixed Fixed::operator*(const Fixed &a)
{
	return (this->toFloat() * a.toFloat());
}

Fixed Fixed::operator/(const Fixed &a)
{

	if (a.toFloat() == 0)
		exit(0);
	return ((this->toFloat() / a.toFloat()));
}

Fixed &Fixed::operator =(const Fixed &src)
{
	if (this != &src)
		this->fixedPointerValue = src.getRawBits();
	return (*this);
}

Fixed &Fixed::operator++(void)
{
	this->fixedPointerValue += (1 << this->fractBits);
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	tmp;

	tmp = *this;
	this->fixedPointerValue += (1 << this->fractBits);
	return (tmp);
}

Fixed &Fixed::operator--(void)
{
	this->fixedPointerValue -= (1 << this->fractBits);
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	tmp;

	tmp = *this;
	this->fixedPointerValue -= (1 << this->fractBits);
	return (tmp);
}

std::ostream &operator<<(std::ostream &out, const Fixed &src)
{
	float	result;

	result = (float)src.getRawBits() / 256.0f;
	out << result;
	return (out);
}

Fixed &Fixed::max(Fixed &one, Fixed &two)
{
	if (one.getRawBits() > two.getRawBits())
		return (one);
	return (two);
}

const Fixed &Fixed::max(const Fixed &one, const Fixed &two)
{
	if (one.getRawBits() > two.getRawBits())
		return (one);
	return (two);
}

Fixed &Fixed::min(Fixed &one, Fixed &two)
{
	if (one.getRawBits() < two.getRawBits())
		return (one);
	return (two);
}

const Fixed &Fixed::min(const Fixed &one, const Fixed &two)
{
	if (one.getRawBits() < two.getRawBits())
		return (one);
	return (two);
}

Fixed::~Fixed()
{
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