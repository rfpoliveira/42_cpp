/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 11:12:02 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/06/23 15:14:14 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

Contact::Contact(void){}

Contact::~Contact(void){}

std::string	Contact::getter(int what_to_get) const
{
	switch (what_to_get)
	{
	case 1:
		return this->first_name;
	
	case 2:
		return this->last_name;

	case 3:
		return this->nickname;

	case 4:
		return this->phone_number;
	
	case 5:
		return this->darkest_secret;
	
	default:
		return NULL;
	}
}

void	Contact::setter(int what_to_get, std::string buffer)
{
	switch (what_to_get)
	{
	case 1:
	{
		this->first_name = buffer;
		return ;
	}

	case 2:
	{
		this->last_name = buffer;
		return ;
	}

	case 3:
	{
		this->nickname = buffer;
		return ;
	};

	case 4:
	{
		this->phone_number = buffer;
		return ;
	}
	
	case 5:
	{
		this->darkest_secret = buffer;
		return ;
	};
	
	default:
		return ;
	}
}

std::string Contact::truncate_info (std::string info) const
{
	if (info.length() > 10)
		return info.substr(0, 9) + ".";
	return info;
}