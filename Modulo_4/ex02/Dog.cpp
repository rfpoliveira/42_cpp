/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 15:48:47 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/12/02 16:50:42 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
	std::cout << "Dog contructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain;
}

Dog::Dog(const Dog &other) : AAnimal()
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*(other.brain));
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		this->brain = new Brain(*(other.brain));
	}
	return(*this);
}

Dog::~Dog()
{
	delete brain;
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

std::string Dog::getIdea(int index) const
{
	return(this->brain->ideas[index]);
}

void Dog::alterIdea(std::string newIdea, int index)
{
	if (index < 0 || index >= 100)
	{
		std::cerr << "Error: invalid index (0 - 99)" << '\n';
	}
	this->brain->ideas[index] = newIdea;
}