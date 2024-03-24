/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 19:53:39 by vde-vasc          #+#    #+#             */
/*   Updated: 2024/03/23 21:09:04 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main(void)
{
	Bureaucrat vasco("Vasco", 5);
	Intern	firmino;
	AForm	*test;
	AForm	*shru;
	AForm	*robo;
	AForm	*presi;

	shru = firmino.makeForm("Presidential pardon", "lulinha");
	robo = firmino.makeForm("Robotomy request", "pablito");

	presi = firmino.makeForm("Shrubbery creation", "gigachad");
	test = firmino.makeForm("test", "test");

	vasco.signForm(*shru);
	vasco.signForm(*robo);
	vasco.signForm(*presi);

	vasco.executeForm(*shru);
	vasco.executeForm(*robo);
	vasco.executeForm(*presi);

	if (test != nullptr)
		vasco.executeForm(*test);
	else
		std::cout << "Form not found" << std::endl;
	return (0);
}
