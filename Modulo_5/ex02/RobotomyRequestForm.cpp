/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:43:56 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/22 13:18:50 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <stdlib.h>
#include <ctime>

	RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), _target("Default target"){}
	
	RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45),  _target(target){}
	
	RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& other): AForm(other), _target(other._target){}
	
	RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& other)
	{
		this->_target = other._target;
		return (*this);
	}
	
	RobotomyRequestForm::~RobotomyRequestForm(){}
	
	void RobotomyRequestForm::execute(const Bureaucrat& executor) const
	{
		if (executor.getGrade() > this->getExecGrade())
			throw(RobotomyRequestForm::GradeTooLowExeption());
		if(!getSignStatus())
			throw(RobotomyRequestForm::NotSigned());
		std::cout << "* DRILLING (AND SCREAMING) NOISES *" << std::endl;
		
		srand(time(0));
		bool chance = rand() % 2;
		if (chance)
			std::cout << this->_target << " successfully robotomised!" << std::endl;
		else
			std::cout << this->_target << " robotomy failed!" << std::endl;
	}