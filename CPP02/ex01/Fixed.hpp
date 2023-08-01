/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 01:54:49 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/08/01 16:53:01 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int	fixedPointerValue;
		static const int fractBits;
	public:
		Fixed(void);
		Fixed(const int intNumber);
		Fixed(const float floatNumber); 
		Fixed(const Fixed& copy);
		Fixed &operator=(const Fixed& copy);
		~Fixed(); 
		
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out, const Fixed &src);