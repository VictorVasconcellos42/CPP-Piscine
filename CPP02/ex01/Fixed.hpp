/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 01:54:49 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/26 02:53:31 by vde-vasc         ###   ########.fr       */
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
		Fixed &operator=(const Fixed& copy); // Sobrecarga do operador de atribuição
		~Fixed(); // Destructor padrão 
		
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const; // Retorna o valor do ponto flutuante
		void	setRawBits(int const raw); // Atribui um valor ao ponto flutuante
	private:
		int	fixedPointerValue;
		
		static const int fractBits;
};

std::ostream &operator<<(std::ostream &out, const Fixed &src);