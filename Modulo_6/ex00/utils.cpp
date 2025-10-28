/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:22:45 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/10/28 13:18:56 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void print_converted(char c, int i, float f, double d, std::string exp)
{
    if (isprint(c))
        std::cout << "char: '" << c << "'" << std::endl;
    else if (f == std::numeric_limits<float>::infinity()
    || f == (-1 * std::numeric_limits<float>::infinity())
    || f != f || i > 126 || i < 0)
        std::cout << "char: impossible" << std::endl;
    else
        std::cout << "char : Non Displable" << std::endl;
    if (f == std::numeric_limits<float>::infinity()
    || (-1 * f == std::numeric_limits<float>::infinity())
    || f != f)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << i << std::endl;
   if ((f == std::numeric_limits<float>::infinity() && exp.find("inf") == exp.npos)
    || (f == (-1 * std::numeric_limits<float>::infinity()) && exp.find("inf") == exp.npos))
        std::cout << "float: impossible" << std::endl;
    else
        std::cout << "float: " << f << "f" << std::endl;
    if ((d == std::numeric_limits<float>::infinity() && exp.find("inf") == exp.npos)
    || (d == (-1 * std::numeric_limits<float>::infinity()) && exp.find("inf") == exp.npos))
        std::cout << "double: impossible" << std::endl;
    else
        std::cout << "double: " << d << std::endl;
}

bool check_double(std::string exp)
{
    int flag = 0;

    if (exp == "nan" || exp == "inf" || exp == "-inf" || exp == "+inf")
        return (true);
    std::string::const_iterator i = exp.begin();
    if (exp.at(0) == '-' || exp.at(0) == '+')
        ++i;
    while (i != exp.end() && (std::isdigit(*i) || *i == '.'))
    {
        if (*i == '.')
            ++flag;
        ++i;
    }
    if (exp.end() == i && flag == 1 && exp.at(exp.size() - 1) != '.')
        return (true);
    return (false);
}

bool check_float(std::string exp)
{
    if (exp.at(exp.size() - 1) != 'f')
        return (false);
    if (exp == "nanf" || exp == "inff" || exp == "-inff" || exp == "+inff")
        return (true);
    int flag = 0;
    std::string::const_iterator i = exp.begin();

    if (exp.at(0) == '-' || exp.at(0) == '+')
        ++i;
    while ((i != exp.end() - 1 && std::isdigit(*i)) || *i == '.')
    {
        if (*i == '.')
            ++flag;
        ++i;
    }
    if (exp.end() - 1 == i && flag == 1)
        return (true);
    return (false);
}

bool check_int(std::string exp)
{
    std::string::const_iterator i = exp.begin();
    if (exp.at(0) == '-')
        ++i;
    while (i != exp.end() && std::isdigit(*i))
        ++i;
    if (exp.end() == i)
        return (true);
    return (false);
}