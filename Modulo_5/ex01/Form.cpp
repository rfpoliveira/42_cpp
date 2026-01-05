/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 19:51:39 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/20 13:02:08 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Form::Form(): _name("Default"), _sign(false), _sign_grade(150), _exec_grade(150){}

Form::Form(const std::string name, const int sign_grade, const int exec_grade):
	_name(name), _sign(false), _sign_grade(sign_grade), _exec_grade(exec_grade) 
{
	try
	{
		if (this->_sign_grade > 150 || this->_exec_grade > 150)
			throw (Form::GradeTooLowExeption());
		else if (this->_sign_grade < 1 || this->_exec_grade < 1)
			throw (Form::GradeTooHighExeption());
	}
	catch(Form::GradeTooHighExeption& e)
	{
		std::cout << e.error() << std::endl;
		std::cout << "Please enter valid paramaters" << std::endl;
	}
	catch(Form::GradeTooLowExeption& e)
	{
		std::cout << e.error() << std::endl;
		std::cout << "Please enter valid paramaters" << std::endl;
	}
}

Form::Form(const Form &other): _name(other._name), _sign(other._sign), _sign_grade(other._sign_grade), _exec_grade(other._exec_grade){}

Form& Form::operator=(const Form &other)
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

Form::~Form(){};

const std::string Form::getName(void) const
{
	return (this->_name);	
}
bool Form::getSignStatus(void) const
{
	return (this->_sign);
}

int Form::getSignGrade(void) const
{
	return (this->_sign_grade);
}

int Form::getExecGrade(void) const
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
