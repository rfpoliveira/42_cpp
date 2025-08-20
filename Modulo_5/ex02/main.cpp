/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 17:27:43 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/20 16:09:49 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main (void)
{
	Bureaucrat* a = new Bureaucrat("a", 1);
	Bureaucrat* b  = new Bureaucrat("b", 150);

	PresidentialPardonForm a1("Ze");
	ShrubberyCreationForm b1("david");
	RobotomyRequestForm c1("Renato");

	a->executeForm(a1);
	a->executeForm(b1);
	a->executeForm(c1);

	b->executeForm(a1);
	b->executeForm(b1);
	b->executeForm(c1);

	delete a;
	delete b;
}