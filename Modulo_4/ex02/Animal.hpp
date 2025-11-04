/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 15:41:12 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/11/04 14:09:00 by rpedrosa         ###   ########.fr       */
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
		virtual void makeSound(void) const = 0;
		virtual std::string get_type(void) const;
		virtual void getIdea(int numb) const = 0;
};

class Brain
{
	public:
		Brain();
		Brain(const Brain& other);
		Brain &operator=(const Brain &other);
		~Brain();
		
		std::string ideas[100];
};

class Dog: public Animal
{
	private:
		Brain *brain;

	public:
		Dog();
		Dog(const Dog& other);
		Dog &operator=(const Dog &other);
		~Dog();
		void makeSound(void) const;
		std::string get_type(void) const;
		void getIdea(int numb) const;
};

class Cat: public Animal
{
	private:
		Brain *brain;

	public:
		Cat();
		Cat(const Cat& other);
		Cat &operator=(const Cat &other);
		~Cat();
		void makeSound(void) const;
		std::string get_type(void) const;
		void getIdea(int numb) const;
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