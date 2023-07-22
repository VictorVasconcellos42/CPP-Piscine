/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 23:00:43 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/19 23:25:52 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <iostream>

class Harl 
{
	private:
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
		void	 	(Harl::*type[4])(void);
		std::string	inputLevel[4];
	public:
		Harl();
		void	complain(std::string level);

};

#endif