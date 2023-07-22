/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 23:24:56 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/19 23:25:17 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)

{
	Harl harl;
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	return (0);
}