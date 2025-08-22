/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:06:10 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/22 13:18:54 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <string>

	ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), _target("Default target"){}
	
	ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137), _target(target){}
	
	ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& other): AForm(other), _target(other._target){}
	
	ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& other)
	{
		this->_target = other._target;
		return (*this);
	}
	
	ShrubberyCreationForm::~ShrubberyCreationForm(){}

	void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
	{
		if (executor.getGrade() > this->getExecGrade())
			throw(ShrubberyCreationForm::GradeTooLowExeption());
		std::string file_name = this->_target + "_shrubbery";
		std::ofstream outfile(file_name.c_str());
		outfile << "              v .   ._, |_  .," << std::endl;
		outfile << "           `-._\\  .   /    |/_" << std::endl;
		outfile << "               \\  _\\ y | \\//" << std::endl;
		outfile << "         _\\_.___\\, \\/ -.\\||" << std::endl;
		outfile << "           `7-,--.`._||  / / ," << std::endl;
		outfile << "           /'     `-. `./ / |/_.'" << std::endl;
		outfile << "                     |    |//" << std::endl;
		outfile << "                     |_    /" << std::endl;
		outfile << "                     |-   |" << std::endl;
		outfile << "                     |   =|" << std::endl;
		outfile << "                     |    |" << std::endl;
		outfile << "--------------------/ ,  . \\--------._" << std::endl;
		outfile.close();
	}