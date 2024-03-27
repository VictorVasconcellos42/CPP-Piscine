/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 04:26:50 by vde-vasc          #+#    #+#             */
/*   Updated: 2024/03/27 13:12:47 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array
{
	private:
		T *array;
		unsigned int len;
	public:
		Array(void);
		Array(unsigned int n);
		Array(Array<T> const &src);
		~Array(void);
		Array<T> &operator=(Array<T> const &src);
		unsigned int size(void);
		Array<T> operator[](unsigned int n);
		bool operator!=(const Array<T> &src);
};

template <typename T>
Array<T>::Array(void) : len(0)
{
	array = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n) : len(n)
{
	array = new T[n];
}

template <typename T>
Array<T>::Array(Array<T> const &src)
{
	*this = src;
}

template <typename T>
Array<T>::~Array(void)
{
	delete[] array;
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> const &src)
{
	if (this != &src)
	{
		delete[] array;
		len = src.len;
		array = new T[len];
		for (unsigned int i = 0; i < len; i++)
			array[i] = src.array[i];
	}
	return (*this);
}

template <typename T>
unsigned int Array<T>::size(void)
{
	return (len);
}

template <typename T>
Array<T> Array<T>::operator[](unsigned int n)
{
	if (n >= len)
		throw std::out_of_range("Overflow index");
	return (array[n]);
}

template <typename T>
bool Array<T>::operator!=(const Array<T> &src)
{
	if (len != src.len)
		return (true);
	for (unsigned int i = 0; i < len; i++)
		if (array[i] != src.array[i])
			return (true);
	return (false);
};
