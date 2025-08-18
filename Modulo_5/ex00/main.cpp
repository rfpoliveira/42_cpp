/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 17:27:43 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/18 18:29:46 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
	Bureaucrat* a = new Bureaucrat("a", 1);
	Bureaucrat* b = new Bureaucrat("b", 50);
	Bureaucrat* c = new Bureaucrat("c", 150);

// errors:

 	Bureaucrat* d = new Bureaucrat("Zé", 0);
	Bureaucrat* f = new Bureaucrat("Zé", 200);
 
	
	std::cout << *a;
	std::cout << *b;
	std::cout << *c;
	std::cout << *d;
	std::cout << *f;

	try
	{
		a->decrementGrade();
	}
	catch (Bureaucrat::GradeTooLowExeption& e)
	{
		std::cout << e.error() << std::endl;
	}
	std::cout << *a;

	try
	{
		a->incrementGrade();
	}
	catch (Bureaucrat::GradeTooHighExeption& e)
	{
		std::cout << e.error() << std::endl;
	}
	std::cout << *a;

	try
	{
		a->incrementGrade();
	}
	catch (Bureaucrat::GradeTooHighExeption& e)
	{
		std::cout << e.error() << std::endl;
	}
	std::cout << *a;
	
	try
	{
		b->decrementGrade();
	}
	catch (Bureaucrat::GradeTooLowExeption& e)
	{
		std::cout << e.error() << std::endl;
	}
	std::cout << *b;

	try
	{
		c->decrementGrade();
	}
	catch (Bureaucrat::GradeTooLowExeption& e)
	{
		std::cout << e.error() << std::endl;
	}
	std::cout << *c;
	
	delete a;
	delete b;
	delete c;
	delete d;
	delete f;
}