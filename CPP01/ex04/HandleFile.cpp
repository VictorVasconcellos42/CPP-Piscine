/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HandleFile.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 05:03:49 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/08/01 13:11:22 by vde-vasc         ###   ########.fr       */
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
	this->file.open(file);
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
	std::size_t	pos;
	std::size_t	len;

	while (std::getline(this->file, line))
	{
		pos = 0;
		len = this->s1.length();
		while ((pos = line.find(this->s1, pos)) != std::string::npos)
		{
			line.erase(pos, len);
			line.insert(pos, this->s2);
			if (len > this->s2.length())
				pos += this->s2.length();
			else
				pos += len;
		}
		this->outFile << line << std::endl;
	}
}