/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:45:10 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/22 12:54:55 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
	private:
	std::string _target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string& target);
		PresidentialPardonForm(PresidentialPardonForm& other);
		PresidentialPardonForm& operator=(PresidentialPardonForm& other);
		~PresidentialPardonForm();
		
		void execute(const Bureaucrat& executor) const;
};