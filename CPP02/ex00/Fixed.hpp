/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 01:54:49 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/08/01 16:52:14 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	Fixed
{
	private:
		int	fixedPointerValue;
		static const int fractBits;
	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed &operator=(const Fixed& copy);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};