/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 04:47:35 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/08/01 13:15:26 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HandleFile.hpp"

int	validateFile(char *file)
{
	std::ifstream	tmp;

	tmp.open(file);
	if (tmp.is_open())
	{
		tmp.close();
		return (true);
	}
	tmp.close();
	std::cout << "File not exist" << std::endl;
	return (false);
}

int	main(int argc, char **argv)
{
	HandleFile	handleFile;
	if (argc == 4 && validateFile(argv[1]))
	{
		handleFile.setFile(argv[1]);
		handleFile.setS1(argv[2]);
		handleFile.setS2(argv[3]);
		handleFile.replace();
	}
	else
		std::cout << "Invalid parameters, please try again" << std::endl;
	return (0);
}