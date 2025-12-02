/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:38:09 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/12/02 15:30:30 by rpedrosa         ###   ########.fr       */
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
    
    PmergeMe<std::vector<int> > list(argv, argc);

    std::vector<int>::iterator it;
    for(it = list.sequence.begin(); it != list.sequence.end(); it++)
        std::cout << *it << std::endl;
}