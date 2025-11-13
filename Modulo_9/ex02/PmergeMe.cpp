/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:39:18 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/11/13 17:36:34 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template<typename T>
PmergeMe<T>::PmergeMe(){};

template<typename T>
PmergeMe<T>::PmergeMe(char **argv, int argc)
{
    for(int i = 1; i < argc; i++)
        sequence.push_back(atoi(argv[i]));
};
template<typename T>
PmergeMe<T>::PmergeMe(const PmergeMe &other)
{
    sequence = other.sequence;
};
template<typename T>
PmergeMe<T> &PmergeMe<T>::operator=(const PmergeMe& other)
{
    sequence = other.sequence;
    return (*this);
};

template<typename T>
PmergeMe<T>::~PmergeMe(){};

template class PmergeMe<std::vector<int> >;
template class PmergeMe<std::deque<int> >;