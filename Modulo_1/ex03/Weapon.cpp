/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:39:20 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/05 15:16:18 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

Weapon::Weapon(std::string type)
{
	this->type = type;	
};

Weapon::~Weapon(){};

const std::string& Weapon::getType(void) const
{
	return (this->type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}