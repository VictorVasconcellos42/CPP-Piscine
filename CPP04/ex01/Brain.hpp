/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:20:22 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/31 16:12:43 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain(void);
		Brain(const Brain &cpy);
		Brain&operator=(const Brain &src);
		~Brain();

		std::string	getOneIdeal(unsigned int i) const ;
		void		setOneIdeal(std::string, unsigned int i);
};