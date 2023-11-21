/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:57:23 by tspoof            #+#    #+#             */
/*   Updated: 2023/11/21 21:06:44 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

void print_int(int const &x)
{
	std::cout << x << std::endl;
}
void print_string(std::string const &x)
{
	std::cout << x << std::endl;
}

template <typename T>
void print(T const &x)
{
	std::cout << x << std::endl;
}

int main(void)
{
	int int_array[3] = {1, 2, 3};
	iter(int_array, 3, print_int);

	std::cout << "-------------------" << std::endl;

	std::string string_array[3] = {"Hello", "World", "!"};
	iter(string_array, 3, print_string);

	std::cout << "-------------------" << std::endl;

	iter(int_array, 3, print);
	iter(string_array, 3, print);
	return 0;
}
