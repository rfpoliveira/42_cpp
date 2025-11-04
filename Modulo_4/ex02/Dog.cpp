/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 15:48:47 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/11/04 12:46:49 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain;
}

Dog::Dog(const Dog &other)
{
	this->type = other.type;
	this->brain = new Brain;
	this->brain = other.brain;
}

Dog& Dog::operator=(const Dog &other)
{
	if (this != &other)
		this->type = other.type;
	return(*this);
}

Dog::~Dog()
{
	std::cout << "dog destructor called" << std::endl;
	delete this->brain;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof, Woof" << std::endl;
}

std::string Dog::get_type(void) const
{
	return(this->type);
}

void Dog::getIdea(int numb) const
{
	std::cout << this->brain->ideas[numb] << std::endl;
}