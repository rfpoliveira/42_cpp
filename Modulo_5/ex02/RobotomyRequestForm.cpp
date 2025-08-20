/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:43:56 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/20 16:52:06 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

	RobotomyRequestForm::RobotomyRequestForm(): _target("Default target"),  AForm("RobotomyRequestForm", 72, 45){}
	
	RobotomyRequestForm::RobotomyRequestForm(std::string target): _target(_target), AForm("RobotomyRequestForm", 72, 45){}
	
	RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& other): _target(other._target), AForm(other){}
	
	RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& other)
	{
		this->_target = other._target;
		return (*this);
	}
	
	RobotomyRequestForm::~RobotomyRequestForm(){}
	
	void RobotomyRequestForm::execute(const Bureaucrat& executor) const
	{
		std::cout << "* DRILLING (AND SCREAMING) NOISES *" << std::endl;
		
		bool chance = rand() %  2;
		if (chance)
			std::cout << this->_target << " successfully robotomised!" << std::endl;
		else
			std::cout << this->_target << " robotomy failed!" << std::endl;
	}