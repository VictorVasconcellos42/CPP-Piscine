/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 23:17:49 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/08/01 14:07:06 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	this->type[0] = &Harl::debug;
	this->type[1] = &Harl::info;
	this->type[2] = &Harl::warning;
	this->type[3] = &Harl::error;
	this->inputLevel[0] = "DEBUG";
	this->inputLevel[1] = "INFO";
	this->inputLevel[2] = "WARNING";
	this->inputLevel[3] = "ERROR";
}

void	Harl::debug(void)
{
	std::cout << "{DEBUG}" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	std::cout << "" << std::endl;
}	

void	Harl::info(void)
{
	std::cout << "{INFO}" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << "" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "{WARNING}" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << "" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "{ERROR}" << std::endl;
	std::cout <<  "This is unacceptable! I want to speak to the manager now."  << std::endl;
	std::cout << "" << std::endl;
}

void	Harl::complain(std::string level)
{
	int i = 0;
	while (i < 4 && level != this->inputLevel[i])
		i++;
	switch (i)
	{
		case 0:
			(this->*type[0])();
			break;
		case 1:
			(this->*type[1])();
			break;
		case 2:
			(this->*type[2])();
			break;
		case 3:
			(this->*type[3])();
			break;
		default:
			std::cout << "I think that not everything in life is a clear-cut problem" << std::endl;
			break;
	}
}