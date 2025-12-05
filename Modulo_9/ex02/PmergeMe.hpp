/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:39:21 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/12/05 12:38:05 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <deque>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <ctime>

template<typename T>
class PmergeMe
{
    public:
        PmergeMe();
        PmergeMe(char **argv, int argc);
        PmergeMe(const PmergeMe &other);
        PmergeMe<T> &operator=(const PmergeMe &other);
        ~PmergeMe();

        T merge_insert_sort(T& arg);
        T sequence;
        T index;
};