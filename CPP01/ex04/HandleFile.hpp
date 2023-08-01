/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HandleFile.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 04:59:21 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/08/01 12:38:32 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLEFILE_H
#define HANDLEFILE_H

#include <fstream>
#include <iostream>
#include <string>

class HandleFile
{
	private:
		std::ifstream	file;
		std::ofstream	outFile;
		std::string		s1;
		std::string		s2;
	public:
		HandleFile(void);
		~HandleFile();
		void	replace(void);
		void	setFile(std::string file);
		void	setS1(std::string s1);
		void	setS2(std::string s2);
};

#endif