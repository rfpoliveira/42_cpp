/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 14:43:08 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/20 16:51:57 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
	private:
	std::string _target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm& other);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm& other);
		~ShrubberyCreationForm();
		
		void execute(const Bureaucrat& executor) const;
};