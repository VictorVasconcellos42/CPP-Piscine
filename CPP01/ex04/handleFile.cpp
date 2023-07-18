/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handleFile.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 05:03:49 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/18 05:52:10 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HandleFile.hpp"

HandleFile::HandleFile(void)
{
	return ;
}

HandleFile::~HandleFile(void)
{
	this->file.close();
	this->outFile.close();
	return ;
}

void	HandleFile::setFile(std::string file)
{
	this->file.open(file.c_str());
	this->outFile.open(file + ".replace");
}

void	HandleFile::setS1(std::string s1)
{
	this->s1 = s1;
}

void	HandleFile::setS2(std::string s2)
{
	this->s2 = s2;
}

void	HandleFile::replace(void)
{
	std::string	line;
	
	while (std::getline(this->file, line, ' '))
	{
		if (line == this->s1)
			this->outFile << this->s2;
		else
			this->outFile << line;
		if (!this->outFile.eof())
			this->outFile << " ";
	}
}