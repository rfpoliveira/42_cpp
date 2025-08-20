/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 17:08:25 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/20 16:47:15 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("Default"), grade(150){}

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
		std::cout << e.what() << std::endl;
		std::cout << "Please enter valid paramaters" << std::endl;
		this->grade = -1;
	}
	catch(Bureaucrat::GradeTooLowExeption& e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "Please enter valid paramaters" << std::endl;
		this->grade = -1;
	}
}
Bureaucrat::Bureaucrat(const Bureaucrat &other): name(other.name), grade(other.grade){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		const_cast<std::string&>(name) = other.name;
		this->grade = other.grade;
	}
	return(*this);
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

void Bureaucrat::signForm(AForm& Aform)
{
	int catch_false = 0;
	try
	{
		Aform.beSigned(*this);
	}
	catch(AForm::GradeTooLowExeption& e)
	{
		catch_false = 1;
		std::cout << this->getName() << " cound't sign ";
		std::cout << Aform.getName() << " because he's grade is too low." << std::endl;
	}
	if (!catch_false)
	{
		std::cout << this->getName() << " signed ";
		std::cout << Aform.getName() << std::endl;
	}
	
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& brc)
{
	os << brc.getName() << ", bureaucrat grade " << brc.getGrade() << "." <<std::endl;
	return (os);
}

void Bureaucrat::executeForm(AForm const & form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl; 
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

