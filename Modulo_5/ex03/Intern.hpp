/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 13:34:12 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/22 14:07:02 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern& operator=(const Intern&);
	
		AForm *makeForm(const std::string form_name, const std::string form_target);
		typedef AForm *(* functions)(const std::string& target);
};