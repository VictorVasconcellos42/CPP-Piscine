/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:14:46 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/28 20:04:04 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ClapTrap
{
	private:
		std::string 	name;
		unsigned int	hitPoint;
		unsigned int	energyPoint;
		unsigned int	attackDamage;
	public:
		ClapTrap(void);
		ClapTrap(std::string newName);
		ClapTrap(const ClapTrap &copy);
		ClapTrap&operator=(const ClapTrap &src);
		~ClapTrap();

		unsigned int	getHitPoint(void) const;
		unsigned int	getEnergyPoint(void) const;
		unsigned int	getAttackDamage(void) const;
		std::string		getName(void) const;
		void			setName(std::string newName);
		void			setHitPoint(unsigned int value);
		void			setEnergyPoint(unsigned int value);
		void			setAttackDamage(unsigned int value);
		void			attack(const std::string &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};