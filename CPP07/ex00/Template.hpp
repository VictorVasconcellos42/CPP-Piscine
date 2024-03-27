/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 02:36:03 by vde-vasc          #+#    #+#             */
/*   Updated: 2024/03/27 02:41:48 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>

void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
};

template <typename T>

T min(T &a, T &b)
{
	if (a < b)
		return (a);
	return (b);	
};

template <typename T>

T max(T &a, T &b)
{
	if (a > b)
		return (a);
	return (b);	
}