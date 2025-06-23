/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 11:10:34 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/06/23 14:53:23 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int main(void)
{
	PhoneBook phonebook;
	std::string input = "0";
	while (42)
	{
		std::cout << "What you want to do? Please type: [ADD], [SEARCH] or [EXIT]" << std::endl;
		std::getline(std::cin, input);
		if (input.compare("EXIT") == 0)
		{
			std::cout << "Goodbye :)!" << std::endl;
			break ;
		}
		else if (input.compare("ADD") == 0)
			phonebook.add_contact();
		else if (input.compare("SEARCH") == 0)
			phonebook.display_list();
		else
			std::cout << "Please type a valid command!" << std::endl;
	}
	return (0);
}