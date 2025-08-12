/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:28:42 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/12 19:05:07 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	this->funcNames = new std::string[4];
	this->funcNames[0] = "debug";
	this->funcNames[1] = "info";
	this->funcNames[2] = "warning";
	this->funcNames[3] = "error";
	
	this->complains[0] = &Harl::debug;
	this->complains[1] = &Harl::info;
	this->complains[2] = &Harl::warning;
	this->complains[3] = &Harl::error;
};

Harl::~Harl()
{
	delete[] this->funcNames;
};

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my \
7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put \
enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for \
years, whereas you started working here just last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	for(int i = 0; i < 4; i++)
	{
		if (level == this->funcNames[i])
		{
			(this->*complains[i])();
			return ;
		}
	}
}