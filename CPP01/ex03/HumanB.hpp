/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 01:54:53 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/31 17:51:50 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon		*weapon;
	public:
		HumanB(void);
		HumanB(std::string name);
		~HumanB();

		std::string	getName(void) const;
		void		setName(std::string name);
		Weapon		*getWeapon(void) const;
		void		setWeapon(Weapon weapon);
		void		attack(void);
};

#endif