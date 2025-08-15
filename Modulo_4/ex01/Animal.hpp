/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 15:41:12 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/15 17:13:55 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Animal
{
	protected:
		std::string type;
	
	public:
		Animal();
		virtual ~Animal();
		virtual void makeSound(void) const;
		virtual std::string get_type(void) const;
		virtual void getIdea(int numb) const = 0;
};

class Brain
{
	public:
		Brain();
		~Brain();
		std::string ideas[100];
};

class Dog: public Animal
{
	private:
		std::string type;
		Brain *brain;

	public:
		Dog();
		~Dog();
		void makeSound(void) const;
		std::string get_type(void) const;
		void getIdea(int numb) const;
};

class Cat: public Animal
{
	private:
		std::string type;
		Brain *brain;

	public:
		Cat();
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
		~WrongAnimal();
		void makeSound(void) const;
		std::string get_type(void) const;
};

class WrongCat: public WrongAnimal
{
	private:
		std::string type;

	public:
		WrongCat();
		~WrongCat();
		std::string get_type(void) const;
};