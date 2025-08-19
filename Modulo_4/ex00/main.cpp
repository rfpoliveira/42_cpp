/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 15:50:34 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/19 16:52:22 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main (void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->get_type() << " " << std::endl;
	std::cout << i->get_type() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << meta->get_type() << " " << std::endl;
	const WrongAnimal *x = new WrongAnimal();
	const WrongCat *z = new WrongCat();
	std::cout << x->get_type() << " " << std::endl;
	std::cout << z->get_type() << " " << std::endl;
	z->makeSound();
	x->makeSound();
	
	Animal generic;
	generic.makeSound();
	Dog dog;
	dog.makeSound();
	Cat cat;
	cat.makeSound();
	generic.get_type();
	cat.get_type();
	cat.get_type();
	
	delete x;
	delete z;
	delete j;
	delete i;
	delete meta;
	return 0;
}