/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converters.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:26:02 by rpedrosa          #+#    #+#             */
/*   Updated: 2026/03/12 10:36:07 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void found_double(std::string exp)
{
    long double l = strtod(exp.c_str(), NULL);
    double d = 0;
    if (l > std::numeric_limits<double>::max())
        d = std::numeric_limits<double>::infinity();
    else if (l < -std::numeric_limits<double>::max())
        d = -std::numeric_limits<double>::infinity();
    else
        d = strtod(exp.c_str(), NULL);
    float f = static_cast<double>(d);
    int i = static_cast<int>(d);
    char c = static_cast<char>(d);

    print_converted(c, i, f, d, exp);
}

void found_float(std::string exp)
{
    double l = strtod(exp.c_str(), NULL);
    float f = 0;
    if (l > std::numeric_limits<double>::max())
        f = std::numeric_limits<double>::infinity();
    else if (l < -std::numeric_limits<double>::max())
        f = -std::numeric_limits<double>::infinity();
    else
        f = strtod(exp.c_str(), NULL);
    double d = static_cast<double>(f);
    int i = static_cast<int>(f);
    char c = static_cast<char>(f);

    print_converted(c, i, f, d, exp);
}

void found_int(std::string exp)
{
    double l = strtod(exp.c_str(), NULL);
    if (l > INT_MAX || l < INT_MIN)
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float: " << static_cast<float>(l) << "f" << std::endl;
        std::cout << "double: " << l << std::endl;
        return ;
    }
    int i = atoi(exp.c_str());
    char c = static_cast<char>(i);
    float f = static_cast<float>(i);
    double d = static_cast<double>(i);
    print_converted(c, i, f, d, exp);
}
void found_char(std::string exp)
{
    char c = exp.at(0);
    int i = c;
    float f = static_cast<float>(c);
    double d = static_cast<double>(c);
    print_converted(c, i, f, d, exp);
}