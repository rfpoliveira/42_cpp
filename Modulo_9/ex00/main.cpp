/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:41:41 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/11/12 15:45:10 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main (int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: Usage: ./btc <input_file>" << std::endl;
        return (-1);
    }
    
    std::ifstream input_file(argv[1]);
    if (!input_file.is_open())
    {
       std::cout << "Error: Could not open input file" << std::endl;
       return (-2); 
    }
    input_file.close();

    std::ifstream data_file("data.csv");
    if (!data_file.is_open())
    {
        std::cout << "Error: Cound not open data.csv file" << std::endl;
        return (-3);
    }
    data_file.close();

    std::map<int, double> data = init_data_map();
    output(argv[1], data);
}