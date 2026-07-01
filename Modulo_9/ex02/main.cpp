/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:38:09 by rpedrosa          #+#    #+#             */
/*   Updated: 2026/07/01 10:44:46 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <vector>
#include <deque>

std::vector<std::string> ft_split(std::string s, char delimiter)
{
    size_t last = 0;
    size_t next = 0;
    std::vector<std::string> buff;

    while ((next = s.find(delimiter, last)) != std::string::npos) 
    {   
        buff.push_back(s.substr(last, next-last));
        last = next + 1; 
    } 
    buff.push_back(s.substr(last));

/*     std::cout << "printing splitted: \n";
    std::vector<std::string>::iterator it;
    for(it = buff.begin(); it != buff.end(); it++)
        std::cout << *it << "\n";
    std::cout << "stop splitted \n"; */
    return (buff);
}

std::vector<std::string> get_buff(char **argv, int argc)
{
    std::vector<std::string> buff;

    for(int i = 1; i < argc; i++)
    {
        std::string part(argv[i]);
        std::vector<std::string> splitted_part = ft_split(part, ' ');
        std::vector<std::string>::iterator it;
        for (it = splitted_part.begin(); it != splitted_part.end(); it++)
            buff.push_back(*it);      
    }
    return(buff);
}

int main(int argc, char **argv)
{
    if (argc < 2 )
    {
        std::cerr << "Error: Usage: ./PmergeMe <sequence of numbers>" << std::endl;
        return (-1);
    }
    std::cout << "Before: ";
    for(int i = 1; i < argc; ++i)
        std::cout << argv[i] << " ";
    std::cout << "\n";
    
    std::vector<std::string> buff = get_buff(argv, argc);

    clock_t start1 = clock();
    PmergeMe<std::vector<int> > list1(buff);
    clock_t end1 = clock();
    double elapsed1 = double(end1 - start1) / CLOCKS_PER_SEC;
    std::vector<int>::iterator it;
    
    clock_t start2 = clock();
    PmergeMe<std::deque<int> > list2(buff);
    clock_t end2 = clock();
    double elapsed2 = double(end2 - start2) / CLOCKS_PER_SEC;

    std::cout << "After: ";
    for(it = list1.sequence.begin(); it != list1.sequence.end(); it++)
        std::cout << *it << " ";
    std::cout << "\n";

    std::cout << "Time to process a range of " << list2.sequence.size() << " elements with std::deque :" << elapsed2 << " seconds.\n";
    std::cout << "Time to process a range of " << list1.sequence.size() << " elements with std::vector :" << elapsed1 << " seconds.\n";
}