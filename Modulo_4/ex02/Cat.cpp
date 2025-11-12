/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 15:49:57 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/11/12 11:35:24 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain;
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = other.type;
	this->brain = new Brain;
	this->brain = other.brain;
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assigment overload called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return(*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
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
	std::cout << "WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->type = other.type;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat copy assigment overload called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return(*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

std::string WrongCat::get_type(void) const
{
	return(this->type);
}