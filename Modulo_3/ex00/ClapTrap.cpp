/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 16:14:25 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/14 17:26:10 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): 
	_name(name), _hp(10), _ep(10), _ad(0)
{
	std::cout << "contructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& name)
{
	if (this->_hp == 0)
		std::cout << "ClapTrap is dead and can't attack" << std::endl;
	else if (this->_ep == 0)
		std::cout << "ClapTrap is too tired to attack" << std::endl;
	else
	{
		std::cout << "Claptrap " << this->_name;
		std::cout << " attacks " << name;
		std::cout << ", causing " << this->_ad;
		std::cout << " points of damage!" << std::endl;
		this->_ep--;
	}
}

void ClapTrap::takeDamage(unsigned int amout)
{
	if (this->_hp == 0)
	{
		std::cout << "Stop! He's already dead!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name;
	std::cout << " is attacked and took " << amout;
	std::cout << " points of damage!" << std::endl;

	if (amout > this->_hp)
	{
		this->_hp = 0;
		std::cout << "ClapTrap " << this->_name << " as died..." << std::endl;
	}
	else
		this->_hp -= amout;
}

void ClapTrap::beRepaired(unsigned int amout)
{
	if (this->_hp == 0)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << "is dead and can't repair himself" << std::endl;
	}
	else if (this->_ep == 0)
		std::cout << "ClapTrap is too tired to attack" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " as repaired himself and gained " << amout;
		std::cout << " health points!" << std::endl;
		this->_hp += amout;
		this->_ep--;
	}
}

void ClapTrap::set_ad(unsigned int amout)
{
	this->_ad = amout;
}

