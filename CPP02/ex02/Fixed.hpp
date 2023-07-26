/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 01:54:49 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/26 14:20:38 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(const int intNumber);
		Fixed(const float floatNumber); 
		Fixed(const Fixed& copy);
		Fixed		&operator=(const Fixed& copy);
		bool		operator>(const Fixed&	src);
		bool		operator<(const Fixed&	src);
		bool		operator!=(const Fixed&	src);
		bool		operator==(const Fixed&	src);
		Fixed		operator+(const Fixed& a);
		Fixed		operator-(const Fixed& a);
		Fixed		operator*(const Fixed& a);
		Fixed		operator/(const Fixed& a);
		Fixed		&operator++(void);
		Fixed		operator++(int);
		Fixed		&operator--(void);
		Fixed		operator--(int);
		~Fixed();
		
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		static	Fixed &min(Fixed &one, Fixed &two);
		static	const Fixed &min(const Fixed &one, const Fixed &two);
		static	Fixed &max(Fixed &one, Fixed &two);
		static	const Fixed &max(const Fixed &one, const Fixed &two);
	private:
		int	fixedPointerValue;
		
		static const int fractBits;
};

std::ostream &operator<<(std::ostream &out, const Fixed &src);