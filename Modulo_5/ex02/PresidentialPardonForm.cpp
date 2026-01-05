/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:45:43 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/22 13:18:46 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

	PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5), _target("Default target"){}
	
	PresidentialPardonForm::PresidentialPardonForm(const std::string &target): AForm("PresidentialPardonForm", 25, 5), _target(target){}
	
	PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& other): AForm(other), _target(other._target){}
	
	PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& other)
	{
		this->_target = other._target;
		return (*this);
	}
	
	PresidentialPardonForm::~PresidentialPardonForm(){}
	
	void PresidentialPardonForm::execute(const Bureaucrat& executor) const
	{
		if (executor.getGrade() > this->getExecGrade())
			throw(PresidentialPardonForm::GradeTooLowExeption());
		if(!getSignStatus())
			throw(PresidentialPardonForm::NotSigned());
		std::cout << this->_target << " as been pardoned by Zaphod Beeblebrox!" << std::endl;
	}
			