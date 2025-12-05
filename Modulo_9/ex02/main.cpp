/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:38:09 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/12/05 12:50:51 by rpedrosa         ###   ########.fr       */
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

    clock_t start = clock();
    PmergeMe<std::vector<int> > list(argv, argc);

    clock_t end = clock();
    double elapsed = double(end - start) / CLOCKS_PER_SEC;
    std::vector<int>::iterator it;

    for(it = list.sequence.begin(); it != list.sequence.end(); it++)
        std::cout << *it << std::endl;


    std::cout << "Elapsed time: " << elapsed << " seconds." << std::endl;
}