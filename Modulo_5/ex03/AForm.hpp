/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 19:43:44 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/22 13:21:35 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		bool _sign;
		const int _sign_grade;
		const int _exec_grade;
	public:
		AForm();
		AForm(std::string name, const int sign_grade, const int exec_grade);
		AForm(const AForm& other);
		AForm &operator=(const AForm &other);
		virtual ~AForm() = 0;
		class GradeTooLowExeption: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Error: Grade too low");
				}
		};
		class GradeTooHighExeption: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Error: Grade too high");
				}
		};
		class NotSigned: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Error: Form not signed");
				}
		};
		class AlreadySignedExeption: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Error: Form already signed");
				}
		};
		const std::string getName(void) const;
		bool getSignStatus(void) const;
		int getSignGrade(void) const;
		int getExecGrade(void) const;
		void beSigned(Bureaucrat brc);
		virtual void execute(const Bureaucrat & executor) const = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& Aform);
