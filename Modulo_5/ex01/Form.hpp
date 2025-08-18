/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 19:43:44 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/18 20:45:15 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		bool _sign;
		const int _sign_grade;
		const int _exec_grade;
	public:
		Form(const std::string name, const int sign_grade, const int exec_grade);
		~Form();
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
		const int getSignGrade(void) const;
		const int getExecGrade(void) const;
		void beSigned(Bureaucrat brc);
};

std::ostream& operator<<(std::ostream& os, const Form& form);
