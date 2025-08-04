/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:11:11 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/04 18:17:06 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (void)
{
	std::string str = "HI THIS IS BRAIN";
	
	std::string *stringPTR = &str;

	std::string& stringREF = str;

	std::cout << "Memory adress of str: " << &str << std::endl;
	std::cout << "Memory adress of stringPTR: " << &stringPTR << std::endl;
	std::cout << "Memory adress of stringREF: " << &stringREF << std::endl;

	std::cout << "Value of str: " << str << std::endl;
	std::cout << "Value pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed by stringREF: " << stringREF << std::endl;
}