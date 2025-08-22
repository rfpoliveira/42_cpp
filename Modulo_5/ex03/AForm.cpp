/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 19:51:39 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/22 13:13:18 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

AForm::AForm(): _name("Default"), _sign(false), _sign_grade(150), _exec_grade(150){}

AForm::AForm(std::string name, const int sign_grade, const int exec_grade):
	_name(name), _sign(false), _sign_grade(sign_grade), _exec_grade(exec_grade) 
{
	try
	{
		if (this->_sign_grade > 150 || this->_exec_grade > 150)
			throw (AForm::GradeTooLowExeption());
		else if (this->_sign_grade < 1 || this->_exec_grade < 1)
			throw (AForm::GradeTooHighExeption());
	}
	catch(AForm::GradeTooHighExeption& e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "Please enter valid paramaters" << std::endl;
	}
	catch(AForm::GradeTooLowExeption& e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "Please enter valid paramaters" << std::endl;
	}
}

AForm::AForm(const AForm &other): _name(other._name), _sign(other._sign), _sign_grade(other._sign_grade), _exec_grade(other._exec_grade) {}

AForm& AForm::operator=(const AForm &other)
{
	if (this != &other)
	{
		const_cast<std::string&>(_name) = other._name;
		const_cast<int&>(_sign_grade) = other._sign_grade;
		const_cast<int&>(_exec_grade) = other._exec_grade;
		this->_sign = other._sign;
	}
	return(*this);
}

AForm::~AForm(){}

const std::string AForm::getName(void) const
{
	return (this->_name);	
}
bool AForm::getSignStatus(void) const
{
	return (this->_sign);
}

int AForm::getSignGrade(void) const
{
	return (this->_sign_grade);
}

int AForm::getExecGrade(void) const
{
	return (this->_exec_grade);
}

void AForm::beSigned(Bureaucrat brc)
{
	if (brc.getGrade() <= this->_sign_grade)
		this->_sign = true;
	else
		throw (AForm::GradeTooLowExeption());
}

std::ostream& operator<<(std::ostream& os, const AForm& Aform)
{
	os << Aform.getName() << " is a Aform that is ";
	if (Aform.getSignStatus())
		os << "signed, ";
	else
		os << "not signed, ";
	os << "requires a grade of " << Aform.getSignGrade();
	os << " to be signed and a grade of " << Aform.getExecGrade() << " to be executed.";
	os << std::endl;
	return (os);
}


