/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 17:08:25 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/18 18:26:20 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
	try
	{
		if (grade > 150)
			throw (Bureaucrat::GradeTooLowExeption());
		else if (grade < 1)
			throw (Bureaucrat::GradeTooHighExeption());
		else
			this->grade = grade;
	}
	catch(Bureaucrat::GradeTooHighExeption& e)
	{
		std::cout << e.error() << std::endl;
		std::cout << "Please enter valid paramaters" << std::endl;
		this->grade = -1;
	}
	catch(Bureaucrat::GradeTooLowExeption& e)
	{
		std::cout << e.error() << std::endl;
		std::cout << "Please enter valid paramaters" << std::endl;
		this->grade = -1;
	}
}

Bureaucrat::~Bureaucrat(){};

int Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

const std::string Bureaucrat::getName(void) const
{
	return (this->name);
}

void Bureaucrat::incrementGrade(void)
{
		if (this->grade <= 1)
			throw (Bureaucrat::GradeTooHighExeption());
		this->grade--;
}

void Bureaucrat::decrementGrade(void)
{
	if (this->grade >= 150)
		throw (Bureaucrat::GradeTooLowExeption());
	this->grade++;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& brc)
{
	os << brc.getName() << ", bureaucrat grade " << brc.getGrade() << "." <<std::endl;
	return (os);
}
