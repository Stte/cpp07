/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:20:57 by tspoof            #+#    #+#             */
/*   Updated: 2023/11/21 20:54:58 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>
#include <string>

int main(void)
{
	{
		int a = 0;
		int b = 1;
		std::cout << a << " " << b << std::endl;
		swap(a, b);
		std::cout << a << " " << b << std::endl;
	}

	std::cout << "-------------------" << std::endl;

	{
		std::string a = "World!";
		std::string b = "Hello";
		std::cout << a << " " << b << std::endl;
		swap(a, b);
		std::cout << a << " " << b << std::endl;
	}

	std::cout << "-------------------" << std::endl;

	std::cout << max(20, 5) << std::endl;
	std::cout << max('a', 'b') << std::endl;

	std::cout << "-------------------" << std::endl;

	std::cout << min(20, 5) << std::endl;
	std::cout << min('a', 'b') << std::endl;
	return 0;
}
