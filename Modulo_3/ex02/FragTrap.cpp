/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 17:51:10 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/14 18:50:08 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->_ad = 30;
	this->_ep = 100;
	this->_hp = 100;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFiveGuys(void)
{
	std::string tmp;

	std::cout << this->_name << " wants to high five you, will you do it (y/n)? ";
	while(std::getline(std::cin, tmp))
	{
		if (tmp == "y")
		{
			std::cout << this->_name << " is very happy and wants to be your friend" << std::endl;
			break ;
		}
		else if (tmp == "n")
		{
			std::cout << this->_name << " is sad and ignores you back" << std::endl;
			break ;	
		}
	}
}

void FragTrap::display_stats(void)
{
	std::cout << "A FragTrap was created and named ";
	std::cout << this->_name;
	std::cout << ". It as " << this->_hp << " hp, " << this->_ep << " ep and " << this->_ad << " ad." << std::endl;
}
