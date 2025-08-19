/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 15:48:47 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/19 16:48:30 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Dog::Dog()
{
	std::cout << "Dog contructor called" << std::endl;
	this->type = "Dog";
}
Dog::Dog(const Dog &other)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->type = other.type;
}
Dog& Dog::operator=(const Dog &other)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return(*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof, Woof" << std::endl;
}
std::string Dog::get_type(void) const
{
	return(this->type);
}