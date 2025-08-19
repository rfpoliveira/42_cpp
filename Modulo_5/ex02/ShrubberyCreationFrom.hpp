/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationFrom.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 14:43:08 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/19 15:13:18 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class ShrubberyCreationForm: private AForm
{
	private:
	std::string _target;

	public:
		ShrubberyCreationForm(std::string _target, std::string name, int exec_grade, int sign_grade);
		~ShrubberyCreationForm();
		
};