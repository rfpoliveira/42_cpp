/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 15:46:13 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/15 16:12:36 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Generic Animal")
{
	std::cout << "Animal contructor called" << std::endl;
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

WrongAnimal::WrongAnimal(): type("Wrong animal")
{
	std::cout << "WrongAnimal contructor called" << std::endl;
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
