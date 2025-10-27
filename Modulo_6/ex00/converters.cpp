/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converters.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:26:02 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/10/27 16:26:25 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void found_int(std::string exp)
{
    long l = atol(exp.c_str());
    if (l > INT_MAX || l < INT_MIN)
    {
        std::cout << "Int Overflow" << std::endl;
        return ;
    }
    int i = atoi(exp.c_str());
    char c = i;
    float f = static_cast<float>(i);
    double d = static_cast<double>(i);
    print_converted(c, i, f, d);
}
void found_char(std::string exp)
{
    char c = exp.at(0);
    int i = c;
    float f = static_cast<float>(c);
    double d = static_cast<double>(c);
    print_converted(c, i, f, d);
}