/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:36:02 by tspoof            #+#    #+#             */
/*   Updated: 2023/11/21 20:48:19 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <class T>
void swap(T &x, T &y)
{
	T tmp = x;
	x = y;
	y = tmp;
};

template <class T>
T max(T const &x, T const &y) { return (x > y ? x : y); };

template <class T>
T min(T const &x, T const &y) { return (x < y ? x : y); };

#endif
