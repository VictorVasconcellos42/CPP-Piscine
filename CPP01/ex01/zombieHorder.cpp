/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorder.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 00:39:49 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/18 00:40:32 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorder(int N, std::string name)
{
	Zombie *zombie = new Zombie[N];

	for (int i = 0; i < N; i++)
		zombie[i].setZombieName(name);
	return (zombie);
}