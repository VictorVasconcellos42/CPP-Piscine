/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 02:13:38 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/08/01 15:59:59 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;
	std::cout << "--------------------------------" << std::endl;
	std::cout << "Fixed Point Status:" << std::endl;
	std::cout << "Init A: " << a.getRawBits() << std::endl;
	std::cout << "Init B: " << b.getRawBits() << std::endl;
	std::cout << "Init C: " << c.getRawBits() << std::endl;
	std::cout << "--------------------------------" << std::endl;
	a.setRawBits(10);
	b.setRawBits(20);
	c.setRawBits(30);
	std::cout << "Fixed Point Status:" << std::endl;
	std::cout << "Init A: " << a.getRawBits() << std::endl;
	std::cout << "Init B: " << b.getRawBits() << std::endl;
	std::cout << "Init C: " << c.getRawBits() << std::endl;
	std::cout << "--------------------------------" << std::endl;
	return (0);
}