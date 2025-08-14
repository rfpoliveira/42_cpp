/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 17:51:10 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/14 18:28:11 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_ad = 20;
	this->_ep = 50;
	this->_hp = 100;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate(void)	
{
	std::cout << "ScavTrap is now in Gate keeper Mode!" << std::endl;
}

void ScavTrap::display_stats(void)
{
	std::cout << "A Scavtrap was created and named ";
	std::cout << this->_name;
	std::cout << ". It as " << this->_hp << " hp, " << this->_ep << " ep and " << this->_ad << " ad." << std::endl;
}
