/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 21:08:33 by tspoof            #+#    #+#             */
/*   Updated: 2023/11/22 19:12:47 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void)
{
	std::cout << "-----------------" << std::endl;
	std::cout << "Empty array" << std::endl;

	Array<int> empty;
	try
	{
		empty[0] = 42;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Failed to access empty[0]" << '\n';
	}

	std::cout << "-----------------" << std::endl;
	std::cout << "Array of 5 elements" << std::endl;

	Array<int> a(5);
	std::cout << "a.size() = " << a.size() << std::endl;

	for (unsigned int i = 0; i < a.size(); i++)
		a[i] = i;

	std::cout << "a[0] = " << a[0] << std::endl;

	std::cout << "-----------------" << std::endl;
	std::cout << "Copy constructor" << std::endl;

	Array<int> b(a);
	std::cout << "b[0] = " << b[0] << std::endl;
	b[0] = 42;
	std::cout << "b[0] = " << b[0] << std::endl;
	std::cout << "a[0] = " << a[0] << std::endl;

	std::cout << "-----------------" << std::endl;
	std::cout << "Exeption test" << std::endl;
	try
	{
		a[10] = 42;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Failed to access a[10]" << '\n';
	}

	std::cout << "-----------------" << std::endl;
	std::cout << "Assignment operator" << std::endl;
	a = b;
	std::cout << "a[0] = " << a[0] << std::endl;
	std::cout << "b[0] = " << b[0] << std::endl;
	a[0] = 2;
	std::cout << "a[0] = " << a[0] << std::endl;
	std::cout << "b[0] = " << b[0] << std::endl;

	std::cout << "-----------------" << std::endl;
	std::cout << "Array of strings" << std::endl;

	Array<std::string> c(3);
	c[0] = "Hello";
	c[1] = "World";
	c[2] = "!\n";
	for (unsigned int i = 0; i < c.size(); i++)
		std::cout << c[i] << " ";

	return 0;
}
