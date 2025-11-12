/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 12:28:31 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/11/12 16:08:49 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::map<int, double> init_data_map()
{
    std::map<int, double> data;
    std::ifstream ifs("data.csv");
    std::string line;
    int date = 0;
    double ratio = 0;

    getline(ifs, line);
    while(getline(ifs, line))
    {
        date = atoi((line.substr(0, 4) + line.substr(5, 2) + line.substr(8, 2)).c_str());
        ratio = atof(line.substr(11, line.size()).c_str());
        data.insert(std::pair<int, double>(date, ratio)); 
    }
    ifs.close();
    return(data);
}

std::string date_to_string(int input_date)
{
    std::string year = std::to_string(input_date / 10000);
    std::string month = std::to_string((input_date / 100) % 100);
    std::string day = std::to_string(input_date % 100);

    return(year + "-" + month + "-" + day);
}

void output(char *input, std::map<int, double> data)
{
    std::ifstream ifs(input);
    int input_date = 0;
    double coins = 0;
    double result = 0; 
    std::map<int, double>::iterator it;
    std::string line;

    getline(ifs, line);
    while(getline(ifs, line))
    {
        input_date = atoi((line.substr(0, 4) + line.substr(5, 2) + line.substr(8, 2)).c_str());
        coins = atof(line.substr(13, line.size()).c_str());
        
        if (input_date < 20090102)
            std::cout << "Error: bad input => " << date_to_string(input_date) << std::endl;
        else
        {
            it = data.find(input_date);
            if (it == data.end())
                it = data.upper_bound(input_date);
            result = it->second * coins;
            if (result < 0)
            {
                std::cout << "Error: Not a positive number" << std::endl;
                continue ;
            }
            else if (result > 2147483647)
            {
                std::cout << "Error: too large a number" << std::endl;
                continue ;
            }
            std::cout << date_to_string(input_date) << " => " << it->second << " = " << result << std::endl;
        } 
    }
}
