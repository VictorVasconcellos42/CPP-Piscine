/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 02:13:38 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/08/01 17:10:40 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	Fixed a(20);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "------------------------------------" << std::endl;
	std::cout << "Arithmetic Operation: " << std::endl;
	std::cout << "Operator << result: " << a << std::endl;
	std::cout << "Operator + result: " << a + b << std::endl;
	std::cout << "Operator - result: " << a - b << std::endl;
	std::cout << "Operator * result: " << a * b << std::endl;
	std::cout << "Operator / result: " << (a / b) << std::endl;
	std::cout << "Operator  result: " << b << std::endl;
	std::cout << "------------------------------------" << std::endl;
	std::cout << "Max and Min Operation: " << std::endl;
	std::cout << "A value: " << a << std::endl;
	std::cout << "B value: " << b << std::endl;
	std::cout << "Min between A and B result: " << Fixed::min(a, b) << std::endl;
	std::cout << "Max between A and B result: " << Fixed::max( a, b ) << std::endl;
	std::cout << "------------------------------------" << std::endl;
	return 0;
}