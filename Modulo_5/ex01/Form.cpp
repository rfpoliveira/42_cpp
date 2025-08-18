/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 19:51:39 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/18 20:12:14 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, const int sign_grade, const int exec_grade):
	_name(name), _sign_grade(sign_grade), _exec_grade(exec_grade), _sign(false) 
{
	try
	{
		if (this->_sign_grade > 150 || this->_exec_grade > 150)
			throw (Bureaucrat::GradeTooLowExeption());
		else if (this->_sign_grade < 1 || this->_exec_grade < 1)
			throw (Bureaucrat::GradeTooHighExeption());
	}
	catch(Bureaucrat::GradeTooHighExeption& e)
	{
		std::cout << e.error() << std::endl;
		std::cout << "Please enter valid paramaters" << std::endl;
	}
	catch(Bureaucrat::GradeTooLowExeption& e)
	{
		std::cout << e.error() << std::endl;
		std::cout << "Please enter valid paramaters" << std::endl;
	}
}

Form::~Form(){};

const std::string Form::getName(void) const
{
	return (this->_name);	
}
bool Form::getSignStatus(void) const
{
	return (this->_sign);
}

const int Form::getSignGrade(void) const
{
	return (this->_sign_grade);
}

const int Form::getExecGrade(void) const
{
	return (this->_exec_grade);
}

void Form::beSigned(Bureaucrat brc)
{
	if (brc.getGrade() <= this->_sign_grade)
		this->_sign = true;
	else
		throw (Form::GradeTooLowExeption());
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
	os << form.getName() << " is a form that is ";
	if (form.getSignStatus())
		os << "signed, ";
	else
		os << "not signed, ";
	os << "requires a grade of " << form.getSignGrade();
	os << " to be signed and a grade of " << form.getExecGrade() << " to be executed.";
	os << std::endl;
	return (os);
}
