/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:15:11 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/06/23 16:52:53 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

PhoneBook::PhoneBook(void)
{
	this->list_len = 0;
	this->current_contact = 0;
	return ;		
}

PhoneBook::~PhoneBook(void){}

std::string	get_input(std::string msg)
{
	std::string buffer = "";
	while (42)
	{
		std::cout << msg << std::flush;
		std::getline(std::cin, buffer);
		if (std::cin.good() && !buffer.empty())
			return buffer;
		else
		{
			std::cin.clear();
			std::cout << "Please make a valid input" << std::endl;
		}
	}
}

void	PhoneBook::add_contact(void)
{
	std::cout << "Okay, let's had a new contact!" << std::endl;
	std::cin.clear();
	this->contacts[this->current_contact].setter(1, get_input("First name :"));
	this->contacts[this->current_contact].setter(2, get_input("Last name :"));
	this->contacts[this->current_contact].setter(3, get_input("Nickname :"));
	this->contacts[this->current_contact].setter(4, get_input("Phone number: "));
	this->contacts[this->current_contact].setter(5, get_input("Darkest Secret :"));
	if (this->current_contact < 7)
	{
		if (this->list_len < 7)
			this->list_len++;
		this->current_contact++;
	}
	else
		this->current_contact = 0;
}

void	put_strings(Contact contact, std::string index)
{
	std::string first_tmp = contact.getter(1);
	std::string last_tmp = contact.getter(2);
	std::string nick_tmp = contact.getter(3);

	std::cout << std::setw(10) << index << "|" << std::flush;
	std::cout << std::setw(10) << contact.truncate_info(first_tmp) << "|" << std::flush;
	std::cout << std::setw(10) << contact.truncate_info(last_tmp) << "|" << std::flush;
	std::cout << std::setw(10) << contact.truncate_info(nick_tmp) << std::flush;
	std::cout << std::endl;
}

void	PhoneBook::display_list(void) const
{
	std::string index;
	std::ostringstream tmp;

	if (this->list_len == 0)
	{
		std::cout << "Empty contact list :(" << std::endl;
		return ;
	}
	for(int i = 0; i < this->list_len; i++)
	{
		tmp << i;
		index = tmp.str();
		put_strings(this->contacts[i], &index[index.length() - 1]);
		std::cout << std::endl;
	}
	if (this->list_len > 0)
		this->_prompt_index();
}

void	PhoneBook::_prompt_index(void) const
{
	int index = -1;
	std::string buffer;
	
	buffer = "0";
	std::cout << "Select index to display" << std::flush;
	while (index == -1)
	{
		buffer = get_input(": ");
		index = atoi(buffer.c_str());
		if (index < 0 || index >= this->list_len || !std::isdigit(buffer[0]))
		{
			std::cout << "Please enter a valid index" << std::flush;
			index = -1 ;
		}
	}
	for (int i = 1; i <= 5; i++)
		std::cout << this->contacts[index].getter(i) << std::endl;
	std::cout << std::endl;
}
