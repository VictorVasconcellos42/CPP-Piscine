/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 23:24:56 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/08/01 14:10:39 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	harlFilter(char *level)
{
	Harl	harlFilter;
	std::string	commands[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4 && level != commands[i])
		i++;
	switch (i)
	{
		case 4:
			harlFilter.complain(level);
			break;
	
		default:
			while (i < 4)
				harlFilter.complain(commands[i++]);
			break;
	}
	return ;
}

int main(int argc, char **argv)

{
	switch (argc)
	{
		case 2:
			harlFilter(argv[1]);
			break ;
	
		default:
			std::cout << "Invalid Parameters, please try again" << std::endl;
			break ;
	}
	return (0);
}