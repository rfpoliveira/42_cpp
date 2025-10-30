/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:33:31 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/10/30 15:13:09 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <cstdlib>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Usage ./easyfind <number to find>" << std::endl;
        return 0;
    }
    int needle = atoi(argv[1]);
    {
        std::cout << "Test 1: Looking for a int in a vector" << std::endl;
        std::vector<int> vec;
        vec.push_back(1);
        vec.push_back(2);
        vec.push_back(3);

        std::vector<int>::iterator print;
        for (print = vec.begin(); print != vec.end(); ++print)
            std::cout << *print << ", " << std::endl;

        
        std::vector<int>::const_iterator it = easyfind(vec, needle);
        
        if (it != vec.end())
        {
            int n = *it;
            std::cout << "Found: " << n << std::endl;
        }
        else
            std::cout << "Not Found!" << std::endl;
    }

    {
        std::cout << "Test 2: Looking for a int in a list" << std::endl;
        std::list<int> l;
        l.push_back(1);
        l.push_back(2);
        l.push_back(3);

        std::list<int>::iterator print;
        for (print = l.begin(); print != l.end(); ++print)
            std::cout << *print << ", " << std::endl;

        
        std::list<int>::const_iterator it = easyfind(l, needle);
        
        if (it != l.end())
        {
            int n = *it;
            std::cout << "Found: " << n << std::endl;
        }
        else
            std::cout << "Not Found!" << std::endl;
    }
}