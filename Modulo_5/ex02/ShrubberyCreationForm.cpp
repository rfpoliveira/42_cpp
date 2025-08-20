/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:06:10 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/20 16:52:31 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

	ShrubberyCreationForm::ShrubberyCreationForm(): _target("Default target"),  AForm("ShrubberyCreationForm", 145, 137){}
	
	ShrubberyCreationForm::ShrubberyCreationForm(std::string target): _target(_target), AForm("ShrubberyCreationForm", 145, 137){}
	
	ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& other): _target(other._target), AForm(other){}
	
	ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& other)
	{
		this->_target = other._target;
		return (*this);
	}
	
	ShrubberyCreationForm::~ShrubberyCreationForm(){}

	void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
	{
		std::ofstream outfile(this->_target + "_shrubbery");
		outfile << "              v .   ._, |_  .," << std::endl;
		outfile << "           `-._\/  .  \ /    |/_" << std::endl;
		outfile << "               \\  _\, y | \//" << std::endl;
		outfile << "         _\_.___\\, \\/ -.\||" << std::endl;
		outfile << "           `7-,--.`._||  / / ," << std::endl;
		outfile << "           /'     `-. `./ / |/_.'" << std::endl;
		outfile << "                     |    |//" << std::endl;
		outfile << "                     |_    /" << std::endl;
		outfile << "                     |-   |" << std::endl;
		outfile << "                     |   =|" << std::endl;
		outfile << "                     |    |" << std::endl;
		outfile << "--------------------/ ,  . \--------._" << std::endl;
		outfile.close();
	}