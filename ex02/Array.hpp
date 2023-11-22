/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 21:08:46 by tspoof            #+#    #+#             */
/*   Updated: 2023/11/22 19:02:15 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

#define NULL 0

template <typename T>
class Array
{
public:
	Array();
	Array(unsigned int n);
	Array(Array const &other);
	~Array();
	Array &operator=(Array const &other);
	T &operator[](unsigned int i) const;

	unsigned int size() const { return (_size); }

private:
	T *_array;
	unsigned int _size;
};

#include "Array.tpp"

#endif
