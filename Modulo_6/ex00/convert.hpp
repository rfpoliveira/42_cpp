/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:56:51 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/10/27 16:26:46 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <climits>
#include <iomanip>
#include <stdlib.h>

class ScalarConverter
{
    private:
        ~ScalarConverter();
    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ScalarConverter &operator=(const ScalarConverter &other);
        static void convert(std::string);
};

void print_converted(char c, int i, float f, double d);
bool check_double(std::string exp);
bool check_float(std::string exp);
bool check_int(std::string exp);

void found_int(std::string exp);
void found_char(std::string exp);

#endif
