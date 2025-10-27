/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:28:53 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/10/27 16:24:41 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

ScalarConverter::ScalarConverter(){};
ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
    (void)other;
};

ScalarConverter::~ScalarConverter(){};

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other)
{
    (void)other;
    return (*this);
};

void ScalarConverter::convert(std::string exp)
{
    if (check_int(exp))
        found_int(exp);
    else if (exp.length() == 1 && (exp.at(0) > 0 && exp.at(0) < 126))
        found_char(exp);
    else if (check_float(exp))
        std::cout << "float" << std::endl;
    else if (check_double(exp))    
        std::cout << "double" << std::endl;
    else
        std::cout << "Syntax Error" << std::endl;
}

