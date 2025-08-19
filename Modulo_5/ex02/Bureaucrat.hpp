/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:52:28 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/19 14:47:24 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AForm.hpp"

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	
	public:
		Bureaucrat(const std::string name, int grade);
		~Bureaucrat();
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
		int	getGrade(void) const;
		void incrementGrade(void);
		void decrementGrade(void);
		void signForm(AForm& Aform);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& brc);

