/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 19:53:39 by vde-vasc          #+#    #+#             */
/*   Updated: 2024/03/23 16:33:34 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Bureaucrat politian("Vasco", 5);
	ShrubberyCreationForm form("home");

	std::cout << politian << std::endl;
	std::cout << form << std::endl;
	politian.signForm(form);
	politian.executeForm(form);
	return (0);
}