/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 07:01:19 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/28 13:19:43 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class	ScavTrap:public ClapTrap {

	public:
		ScavTrap(void);
		ScavTrap(const std::string newName);
		ScavTrap(const ScavTrap &cpy);
		ScavTrap&operator=(const ScavTrap &src);
		~ScavTrap();

		void	attack(std::string const & target);
		void	guardGate(void);
};