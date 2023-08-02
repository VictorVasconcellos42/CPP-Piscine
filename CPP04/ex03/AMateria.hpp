/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:31:36 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/08/01 23:33:55 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#pragma once

class AMateria
{
	protected:
		
	public:
		AMateria(void);
		AMateria(const AMateria &cpy);
		AMateria&operator=(const AMateria &src);
		~AMateria();
		AMateria(std::string const	&type);
		std::string	const &getType(void) const;

		virtual	AMateria *clone() const = 0;
		//virtual void	use(ICharacter &target);		
};