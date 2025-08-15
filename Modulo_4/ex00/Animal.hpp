/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 15:41:12 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/15 16:17:34 by rpedrosa         ###   ########.fr       */
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
};

class Dog: public Animal
{
	private:
		std::string type;

	public:
		Dog();
		~Dog();
		void makeSound(void) const;
		std::string get_type(void) const;
};

class Cat: public Animal
{
	private:
		std::string type;

	public:
		Cat();
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