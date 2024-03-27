/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Error.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 23:14:00 by vde-vasc          #+#    #+#             */
/*   Updated: 2024/03/26 23:27:34 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>

class Error : public std::exception {
	public:
		virtual const char* what() const throw() {
			return "Error: invalid cast";
		}
};

class ErrorNULL : public std::exception {
	public:
		virtual const char* what() const throw() {
			return "Error: NULL pointer";
	}
};