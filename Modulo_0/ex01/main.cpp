/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:00:23 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/06/10 18:13:55 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int main(void)
{
	PhoneBook *phonebook;
	std::string input = NULL;
	std::cout << "Welcome! What you want to do? [ADD], [SEARCH], [EXIT]" << std::endl;
	while (42)
	{
		std::cout << "What you want to do? Please type: [ADD], [SEARCH] or [EXIT]" << std::endl;
		std::cin >> input;
		if (input.compare("EXIT") == 0)
		{
			std::cout << "Goodbye :)!" << std::endl;
			break ;
		}
		else if (input.compare("ADD"))
			phonebook->add_contact();
		else if (input.compare("SEARCH"))
			phonebook->search_list();
		else
			std::cout << "Please type a valid command!" << std:endl;
	}
	return ;
}
