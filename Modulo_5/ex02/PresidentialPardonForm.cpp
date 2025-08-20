/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:45:43 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/20 16:52:21 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

	PresidentialPardonForm::PresidentialPardonForm(): _target("Default target"),  AForm("PresidentialPardonForm", 25, 5){}
	
	PresidentialPardonForm::PresidentialPardonForm(std::string target): _target(_target), AForm("PresidentialPardonForm", 25, 5){}
	
	PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& other): _target(other._target), AForm(other){}
	
	PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& other)
	{
		this->_target = other._target;
		return (*this);
	}
	
	PresidentialPardonForm::~PresidentialPardonForm(){}
	
	void PresidentialPardonForm::execute(const Bureaucrat& executor) const
	{
		std::cout << this->_target << " as been pardoned by Zaphod Beeblebrox!" << std::endl;
	}
			