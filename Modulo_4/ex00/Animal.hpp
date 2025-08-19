/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 15:41:12 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/19 16:59:15 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Animal
{
	protected:
		std::string type;
	
	public:
		Animal();
		Animal(const Animal& other);
		Animal &operator=(const Animal &other);
		virtual ~Animal();
		virtual void makeSound(void) const;
		virtual std::string get_type(void) const;
};

class Dog: public Animal
{
	public:
		Dog();
		Dog(const Dog& other);
		Dog &operator=(const Dog &other);
		~Dog();
		
		void makeSound(void) const;
		std::string get_type(void) const;
};

class Cat: public Animal
{
	public:
		Cat();
		Cat(const Cat& other);
		Cat &operator=(const Cat &other);
		~Cat();

		void makeSound(void) const;
		std::string get_type(void) const;
};

class WrongAnimal
{
	protected:
		std::string type;
	
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal &operator=(const WrongAnimal &other);
		~WrongAnimal();
		void makeSound(void) const;
		std::string get_type(void) const;
};

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat& other);
		WrongCat &operator=(const WrongCat &other);
		~WrongCat();

		std::string get_type(void) const;
};