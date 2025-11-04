/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 15:49:57 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/11/04 12:47:18 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain;
}

Cat::Cat(const Cat &other)
{
	this->type = other.type;
	this->brain = new Brain;
	this->brain = other.brain;
}

Cat& Cat::operator=(const Cat &other)
{
	if (this != &other)
		this->type = other.type;
	return(*this);
}

Cat::~Cat()
{
	std::cout << "cat destructor called" << std::endl;
	delete this->brain;
}

void Cat::makeSound(void) const
{
	std::cout << "meowww" << std::endl;
}

std::string Cat::get_type(void) const
{
	return(this->type);
}

void Cat::getIdea(int numb) const
{
	std::cout << this->brain->ideas[numb] << std::endl;
}

WrongCat::WrongCat()
{
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other)
{
	this->type = other.type;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
		this->type = other.type;
	return(*this);
}

WrongCat::~WrongCat(){}

std::string WrongCat::get_type(void) const
{
	return(this->type);
}