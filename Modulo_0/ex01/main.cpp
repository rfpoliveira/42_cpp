/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 11:10:34 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/10/01 15:24:25 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	execution(std::string input, PhoneBook *phonebook)
{
	if (input.compare("EXIT") == 0)
	{
		std::cout << "Goodbye :)!" << std::endl;
		return (1) ;
	}
	else if (input.compare("ADD") == 0)
		phonebook->add_contact();
	else if (input.compare("SEARCH") == 0)
		phonebook->display_list();
	else
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		input = "0";
		std::cout << "Please type a valid command!" << std::endl;
	}
	std::cout << "What you want to do? Please type: [ADD], [SEARCH] or [EXIT]" << std::endl;
	return (0);
}

int main(void)
{
	PhoneBook phonebook;
	std::string input = "0";
	
	std::cout << "What you want to do? Please type: [ADD], [SEARCH] or [EXIT]" << std::endl;
	while (42)
	{
		while (std::getline(std::cin, input))
		{
			if (std::cin.fail() || std::cin.eof())
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				input = "0";
				break;
			}
			if (execution(input, &phonebook) != 0)
				return (0);
		}
		break;
	}
	while (std::getline(std::cin, input))
	{
		if (execution(input, &phonebook) != 0)
			break;
	}
	return (0);
}