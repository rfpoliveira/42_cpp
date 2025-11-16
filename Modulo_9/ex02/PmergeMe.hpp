/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:39:21 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/11/15 12:34:56 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <deque>
#include <vector>
#include <cstdlib>
#include <algorithm>

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
};