/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 01:54:49 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/26 01:57:53 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	Fixed
{
	public:
		Fixed(); // Constructor padrão
		Fixed(const Fixed& copy); // Constructor de cópia
		Fixed &operator=(const Fixed& copy); // Sobrecarga do operador de atribuição
		~Fixed(); // Destructor padrão
		int		getRawBits(void) const; // Retorna o valor do ponto flutuante
		void	setRawBits(int const raw); // Atribui um valor ao ponto flutuante
	private:
		int	fixedPointerValue;
		static const int fractBits;
};