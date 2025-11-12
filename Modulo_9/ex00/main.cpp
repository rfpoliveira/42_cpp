/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:41:41 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/11/12 17:39:35 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main (int argc, char **argv)
{
    std::ifstream data_file("data.csv");
    std::ifstream input_file(argv[1]);
    if (argc != 2 || !input_file.is_open() || !data_file.is_open())
    {
        std::cout << "Error: could not open file" << std::endl;
        return (-1);
    }
    input_file.close();
    data_file.close();

    std::map<int, double> data = init_data_map();
    output(argv[1], data);
    return (0);
}