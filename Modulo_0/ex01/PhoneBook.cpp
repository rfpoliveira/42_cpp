/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:15:11 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/06/10 19:07:42 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

PhoneBook::PhoneBook(void)
{
	this->list_len = 0;
	return ;		
}

PhoneBook::~PhoneBook(void){}

PhoneBook::add_contact(void)
{
	std::string buffer;
	char *number_check;

	number_check = NULL;
	std::cout << "Okay, let's had a new contact!" << std::endl;
	std::cout << "Give me the first name: " << std::endl;
	std::getline(std::cin, buffer);
	this->contacts[this->list_len].setter("first", buffer);
	std::cout << "Give me the last name: " << std::endl;
	std::getline(std::cin, buffer);
	this->contacts[this->list_len].setter("last", buffer);
	std::cout << "Give me the nickname: " << std::endl;
	std::getline(std::cin, buffer);
	this->contacts[this->list_len].setter("nick", buffer);
	std::cout << "Give me the phone number: " << std::endl;
	while (!number_check)
	{
		std::getline(std::cin, buffer);
		strtol(buffer.c_str(), &number_check, 10);
		if (*number_check)
			this->contacts[this->list_len].setter("number", buffer);
		else
			std::cout << "Please type a valid phone number" << std::endl;
	}
	this->contacts[this->list_len].setter("numb", buffer);
	std::cout << "Give me the darkest secret: " << std::endl;
	std::getline(std::cin, buffer);
	this->contacts[this->list_len].setter("secret", buffer);
	this->list_len++;
}
