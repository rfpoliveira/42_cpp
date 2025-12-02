/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:17:56 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/12/02 16:18:40 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAAnimal.hpp"

WrongAAnimal::WrongAAnimal() : type("Default")
{
	std::cout << "WrongAAnimal default constructor called" << std::endl;
}
WrongAAnimal::WrongAAnimal(const WrongAAnimal &other)
{
	std::cout << "WrongAAnimal Copy constructor called" << std::endl;
	this->type = other.type;
}
WrongAAnimal& WrongAAnimal::operator=(const WrongAAnimal &other)
{
	std::cout << "WrongAAnimal Copy assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return(*this);
}

WrongAAnimal::~WrongAAnimal()
{
	std::cout << "WrongAAnimal destructor called" << std::endl;
}

void WrongAAnimal::makeSound(void) const
{
	std::cout << "The WrongAAnimal makes a generic sound" << std::endl;
}

std::string WrongAAnimal::get_type(void) const
{
	return(this->type);
}