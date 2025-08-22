/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 13:37:56 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/22 14:14:52 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::~Intern(){}

Intern&	Intern::operator=(const Intern&) 
{
	return *this;
}

static AForm *presForm(const std::string &form_target)
{
	return (new PresidentialPardonForm(form_target));
}
static AForm *robForm(const std::string &form_target)
{
	return (new RobotomyRequestForm(form_target));
}
static AForm *shrubForm(const std::string &form_target)
{
	return (new ShrubberyCreationForm(form_target));
}

AForm *Intern::makeForm(const std::string form_name, const std::string form_target)
{
	functions func[] = {&shrubForm, &robForm, &presForm};
	std::string names[] = {"shrubbery request", "robotomy request", "presidential request"};

	for (int i = 0; i < 3; i++)
	{
		if (form_name == names[i])
		{
			AForm *form = (func[i](form_target));
			std::cout << "Intern creates " << form_name << " form." << std::endl;
			return (form);
		}
	}
	std::cout << "Form name could not be found." << std::endl;
	return (NULL);
}
