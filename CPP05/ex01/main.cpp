/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 19:53:39 by vde-vasc          #+#    #+#             */
/*   Updated: 2024/03/22 23:20:28 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat politian("Vasco", 5);
	Form sheet("Sheet", 5, 5);

	std::cout << politian << std::endl;
	std::cout << sheet << std::endl;
	politian.descrementGrade();
	politian.signForm(sheet);
	std::cout << sheet << std::endl;
	
	return (0);
}