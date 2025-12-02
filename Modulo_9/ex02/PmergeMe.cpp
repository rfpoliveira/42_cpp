/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:39:18 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/12/02 15:29:57 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template<typename T>
void pair_sort(T &sequence, T& index)
{   
    typename T::iterator back = sequence.begin();
    typename T::iterator front = sequence.begin();
    int temp = 0;
    front++;
    
    while(front != sequence.end())
    {
        if (*back > *front)
        {
           temp = index.at(back);
           index.at(back) = index.at(front);
           index.at(front) = temp;
        }
        back++;
        front++;
        if (front != sequence.end())
            front++;
        back++;
    }
}

template<typename T>
void make_main_pend(T &sequence, T& pend, T& main, T& index)
{
    typename T::iterator it;
    int i = 1;
    
    for(it = index.begin(); it != index.end(); it++)
    {
        i++;
        if(i % 2 == 0)
            pend.push_back(sequence.at(*it));
        else
            main.push_back(sequence.at(*it));
    }
}

int calculate_next_jacob(int first, int second)
{
    return(second + (2 * first));
}

template<typename T>
T get_jacob_order(T &pend)
{
    T jacob;
    
    int x = 3;
    int j = 1;
    int first = 1;
    int second = 3;
    jacob.push_back(1);
    while (jacob.size() != pend.size())
    {
        while (x > (int)pend.size())
            x--;
        jacob.push_back(x);
        x--;
        if (x == j)
        {
            j = second;
            x = calculate_next_jacob(first, second);
            first = second;
            second = x;
        }
    }
    return(jacob);
}


template<typename T>
typename T::iterator get_max(int value, T& sequence, T& index)
{
    typename T::iterator ret;
    for(ret = index.begin(); sequence.at(*index) != value; ret++);
    return (ret);
}

template<typename T>
void insert_pend(T& sequence, T& pend, T& main, T& index)
{
    T order = get_jacob_order(pend);

    typename T::iterator ord_it;
    typename T::iterator pos;
    typename T::iterator max;
    int value = 0;
    for(ord_it = order.begin(); ord_it != order.end(); ord_it++)
    {
        value = pend.at(*(ord_it) - 1);
        max = get_max(value, sequence, index);
        pos = std::upper_bound(main.begin(), max + 1, value);
        sequence.insert(pos, value);
    }
}

template<typename T>
void    PmergeMe<T>::merge_insert_sort()
{
    T main;
    T pend;
    pair_sort(sequence, index);
    make_main_pend(sequence, main, pend, index);

    if (sequence.size() > 1)
        merge_insert_sort();
    insert_pend(sequence, main, pend, index);
}

template<typename T>
PmergeMe<T>::PmergeMe(): sequence() {};

template<typename T>
PmergeMe<T>::PmergeMe(char **argv, int argc)
{
    for(int i = 1; i < argc; i++)
    {
        sequence.push_back(atoi(argv[i]));
        index.push_back(i - 1);
    }
    merge_insert_sort();
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