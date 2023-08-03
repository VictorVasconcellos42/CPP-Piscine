/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:01:25 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/08/03 14:04:47 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual				~IMateriaSource() {}
		virtual	void		learnMateria(AMateria *) = 0;
		virtual	AMateria	*createMateria(std::string const &type) = 0;
};