/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 19:43:44 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/19 14:45:21 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		bool _sign;
		const int _sign_grade;
		const int _exec_grade;
	public:
		AForm(const std::string name, const int sign_grade, const int exec_grade);
		virtual ~AForm() = 0;
		class GradeTooLowExeption: public std::exception
		{
			public:
				virtual const char *error() const throw()
				{
					return ("Error: Grade too low");
				}
		};
		class GradeTooHighExeption: public std::exception
		{
			public:
				virtual const char *error() const throw()
				{
					return ("Error: Grade too high");
				}
		};
		const std::string getName(void) const;
		bool getSignStatus(void) const;
		int getSignGrade(void) const;
		int getExecGrade(void) const;
		void beSigned(Bureaucrat brc);
};

std::ostream& operator<<(std::ostream& os, const AForm& Aform);
