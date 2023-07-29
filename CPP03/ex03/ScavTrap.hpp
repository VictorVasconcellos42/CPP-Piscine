/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 07:01:19 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/28 20:09:41 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class	ScavTrap:public virtual ClapTrap {

	public:
		ScavTrap(void);
		ScavTrap(const std::string newName);
		ScavTrap(const ScavTrap &cpy);
		ScavTrap&operator=(const ScavTrap &src);
		~ScavTrap();

		void	attack(std::string const & target);
		void	guardGate(void);
};