/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 17:27:43 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/22 14:15:17 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main (void)
{
	Intern intern;
	Bureaucrat b("b", 1);

	AForm *a = intern.makeForm("shrubbery request", "bender");
	AForm *c = intern.makeForm("presidential request", "bender");
	AForm *d = intern.makeForm("robotomy request", "bender");
	AForm *e = intern.makeForm("random request", "bender");

	b.signForm(*a);
	b.executeForm(*a);

	b.signForm(*c);
	b.executeForm(*c);


	b.signForm(*d);
	b.executeForm(*d);

	if (a)
		delete a;
	if (c)
		delete c;
	if (d)
		delete d;
	if (e)
		delete e;
}