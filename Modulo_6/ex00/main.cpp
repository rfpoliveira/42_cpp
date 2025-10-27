/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:37:29 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/10/27 16:38:38 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int main (int argc, char **argv)
{
    (void)argc;
    ScalarConverter::convert(argv[1]);
}