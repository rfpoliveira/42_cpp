/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 11:53:31 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/20 11:56:07 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"


class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat &operator=(const Bureaucrat &other);
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
		void signForm(Form& from);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& brc);