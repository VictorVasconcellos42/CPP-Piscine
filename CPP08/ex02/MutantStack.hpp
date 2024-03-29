/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 05:15:42 by vde-vasc          #+#    #+#             */
/*   Updated: 2024/03/29 05:18:44 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(MutantStack const & obj);
		MutantStack & operator=(MutantStack const & obj);
		~MutantStack(void);

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin(void);
		iterator end(void);
};

template <typename T>
MutantStack<T>::MutantStack(void)
{
};

template <typename T>
MutantStack<T>::MutantStack(MutantStack const & obj)
{
	*this = obj;
};

template <typename T>
MutantStack<T> & MutantStack<T>::operator=(MutantStack const & obj)
{
	if (this != &obj)
	{
		this->c = obj.c;
	}
	return *this;
};

template <typename T>
MutantStack<T>::~MutantStack(void)
{
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
	return this->c.begin();
};

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
	return this->c.end();
};