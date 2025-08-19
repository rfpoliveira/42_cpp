/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 15:49:57 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/19 16:58:47 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Cat::Cat()
{
	std::cout << "Cat contructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	this->type = other.type;
}
Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return(*this);
}

Cat::~Cat()
{
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

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
}
WrongCat::WrongCat(const WrongCat &other)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	this->type = other.type;
}
WrongCat& WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
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