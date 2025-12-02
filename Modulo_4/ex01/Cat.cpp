/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 15:49:57 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/12/02 16:52:17 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat contructor called" << std::endl;
	this->type = "Cat";
	brain = new Brain;
}

Cat::Cat(const Cat &other) : Animal()
{
	std::cout << "Cat Copy constructor called" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*(other.brain));
}
Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		this->brain = new Brain(*(other.brain));
	}
	return(*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "meowww" << std::endl;
}

std::string Cat::get_type(void) const
{
	return(this->type);
}

std::string Cat::getIdea(int index) const
{
	return(this->brain->ideas[index]);
}

void Cat::alterIdea(std::string newIdea, int index)
{
	if (index < 0 || index >= 100)
	{
		std::cerr << "Error: invalid index (0 - 99)" << '\n';
	}
	this->brain->ideas[index] = newIdea;
}
