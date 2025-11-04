/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 15:46:13 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/11/04 14:09:19 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Default"){}

Animal::Animal(const Animal &other)
{
	this->type = other.type;
}

Animal& Animal::operator=(const Animal &other)
{
	if (this != &other)
		this->type = other.type;
	return(*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::get_type(void) const
{
	return(this->type);
}

WrongAnimal::WrongAnimal() : type("Default"){}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	this->type = other.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
		this->type = other.type;
	return(*this);
}

WrongAnimal::~WrongAnimal(){}

void WrongAnimal::makeSound(void) const
{
	std::cout << "The WrongAnimal makes a generic sound" << std::endl;
}

std::string WrongAnimal::get_type(void) const
{
	return(this->type);
}
