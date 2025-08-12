/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:28:42 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/12 19:26:25 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){};

Harl::~Harl(){};

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

void	Harl::filter(int level)
{
	switch (level)
	{
	case 1:
		this->debug();
		this->info();
		this->warning();
		this->error();
		break;
	
	case 2:
		this->info();
		this->warning();
		this->error();
		break;

	case 3:
		this->warning();
		this->error();
		break;
	
	case 4:
		this->error();
		break;

	default:
		break;
	}
}

int	Harl::get_level(std::string level)
{
	if (level == "DEBUG")
	{
		std::cout << "[ DEBUG ]" << std::endl;
		return (1);
	}
	else if (level == "INFO")
	{
		std::cout << "[ INFO ]" << std::endl;
		return (2);
	}
	else if (level == "WARNING")
	{
		std::cout << "[ WARNING ]" << std::endl;
		return (3);
	}
	else if (level == "ERROR")
	{
		std::cout << "[ ERROR ]" << std::endl;
		return (4);
	}
	else
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return (-1);
}