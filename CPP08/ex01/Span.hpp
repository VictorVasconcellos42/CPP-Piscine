/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 04:10:20 by vde-vasc          #+#    #+#             */
/*   Updated: 2024/03/29 04:21:39 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <algorithm>
#include <iostream>

class Span
{
	private:
		unsigned int n;
		std::vector<int> store;
	public:
		Span(void);
		Span(unsigned int n);
		Span(Span const & obj);
		Span & operator=(Span const & obj);
		~Span(void);
		
		void addNumber(unsigned int i);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan(void);
		int longestSpan(void);
		
};