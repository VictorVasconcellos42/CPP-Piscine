/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:48:13 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/08/03 07:34:07 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string	name;
	
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &cpy);
		~DiamondTrap(void);
		DiamondTrap&operator=(const DiamondTrap &src);
		
		std::string	getName(void) const;
		std::string	getClapTrapName(void) const;
		void		setName(std::string newName);
		void		setClapTrapName(std::string clapName);
		void		whoAmI(void);
					
};