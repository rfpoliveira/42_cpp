/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:18:08 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/07/30 11:47:02 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){}

Zombie::~Zombie(void){}

void Zombie::announce(void)
{
	std::cout << this->name << ": >: BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::name_setter(std::string name)
{
	this->name = name;
}
