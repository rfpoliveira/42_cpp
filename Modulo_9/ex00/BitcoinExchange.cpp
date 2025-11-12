/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 12:28:31 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/11/12 17:53:43 by rpedrosa         ###   ########.fr       */
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

std::string itoa(int i)
{
    std::ostringstream convert;
    convert << i;
    return(convert.str());
}

std::string date_to_string(int input_date)
{
    std::string year = itoa(input_date / 10000);
    std::string month = itoa((input_date / 100) % 100);
    std::string day = itoa(input_date % 100);

    if (month.size() == 1)
        month = '0' + month;
    if (day.size() == 1)
        day = '0' + day;

    return(year + "-" + month + "-" + day);
}

bool parse_line(std::string line)
{
    if (line.size() < 13)
        return (false);
    
    int year = atoi(line.substr(0, 4).c_str());
    int month = atoi(line.substr(5, 2).c_str());
    int day = atoi(line.substr(8, 2).c_str());

    if (year < 2009 || year > 2022 || month < 1 || month > 12 || day < 1 || day > 31)
        return (false);
    return (true);
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
        if (!parse_line(line))
            std::cout << "Error: bad input => " << line << std::endl;
        else
        {
            input_date = atoi((line.substr(0, 4) + line.substr(5, 2) + line.substr(8, 2)).c_str());
            coins = atof(line.substr(13, line.size()).c_str());
            it = data.find(input_date);
            if (it == data.end())
            {
                it = data.lower_bound(input_date);
                it--;
            }
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
            std::cout << date_to_string(input_date) << " => ";
            std::cout << line.substr(13, line.size()).c_str();
            std::cout << " = " << result << std::endl;
        } 
    }
}
