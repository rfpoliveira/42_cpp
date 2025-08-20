/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:43:37 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/20 16:51:51 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
	private:
	std::string _target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm& other);
		RobotomyRequestForm& operator=(RobotomyRequestForm& other);
		~RobotomyRequestForm();
		
		void RobotomyRequestForm::execute(const Bureaucrat& executor) const;
};