/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 15:46:13 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/11/12 11:30:01 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Default")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	this->type = other.type;
}
Animal& Animal::operator=(const Animal &other)
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return(*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound(void) const
{
	std::cout << "The animal makes a generic sound" << std::endl;
}

std::string Animal::get_type(void) const
{
	return(this->type);
}

WrongAnimal::WrongAnimal() : type("Default")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	this->type = other.type;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return(*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "The WrongAnimal makes a generic sound" << std::endl;
}

std::string WrongAnimal::get_type(void) const
{
	return(this->type);
}
