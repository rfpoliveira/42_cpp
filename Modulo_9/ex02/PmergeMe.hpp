/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:39:21 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/11/27 17:47:01 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <deque>
#include <cstdlib>
#include <algorithm>
#include <map>
#include <vector>

template<typename T>
class PmergeMe
{
    public:
        PmergeMe();
        PmergeMe(char **argv, int argc);
        PmergeMe(const PmergeMe &other);
        PmergeMe<T> &operator=(const PmergeMe &other);
        ~PmergeMe();

        void merge_insert_sort();
        T sequence;
        T pend;
        std::map<int , int> og;
};