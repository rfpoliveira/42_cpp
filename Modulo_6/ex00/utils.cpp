/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:22:45 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/10/27 16:38:21 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void print_converted(char c, int i, float f, double d)
{
    std::cout << std::fixed << std::setprecision(1);
    if (isprint(c))
        std::cout << "char: '" << c << "'" << std::endl;
    else
        std::cout << "char : Non Displable" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
}

bool check_double(std::string exp)
{
    int flag = 0;

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