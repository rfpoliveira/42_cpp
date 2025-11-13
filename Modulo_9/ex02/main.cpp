/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:38:09 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/11/13 17:37:01 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc < 2 )
    {
        std::cerr << "Error: Usage: ./PmergeMe <sequence of numbers>" << std::endl;
        return (-1);
    }
    
    PmergeMe<std::deque<int> > list(argv, argc);

    std::deque<int>::iterator it;
    for(it = list.sequence.begin(); it != list.sequence.end(); it++)
        std::cout << *it << std::endl;
}