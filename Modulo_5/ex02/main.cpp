/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 17:27:43 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/19 14:09:15 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
	Bureaucrat *a = new Bureaucrat("a", 1);
	Bureaucrat *b = new Bureaucrat("b", 150);

	Form *c = new Form("c", 50, 50);

	std::cout << *c;
	b->signForm(*c);
	std::cout << *c;

	std::cout << *c;
	a->signForm(*c);
	std::cout << *c;
	
	delete a;
	delete b;
	delete c;
}