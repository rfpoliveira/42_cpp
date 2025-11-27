/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:39:18 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/11/27 18:19:52 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template<typename T>
void pair_sort(T &sequence)
{   
    typename T::iterator back = sequence.begin();
    typename T::iterator front = sequence.begin();
    front++;
    
    while(front != sequence.end())
    {
        if (*back > *front)
            std::iter_swap(back, front);
        back++;
        front++;
        if (front != sequence.end())
            front++;
        back++;
    }
}

template<typename T>
void save_og_connections(T& sequence, std::map<int, int> &og)
{
    typename T::iterator it;
    int first = 0;
    int second = 0;

    for(it = sequence.begin(); it != sequence.end();)
    {
        first = *it;
        ++it;
        if (it != sequence.end())
        {
            second = *it;
            og.insert(std::pair<int, int>(first, second));
        }
        ++it;
    }
}

template<typename T>
void make_main_pend(T &sequence, T& pend)
{
    typename T::iterator it;
    
    for(it = sequence.begin(); it != sequence.end();)
    {
        pend.push_back(*it);
        sequence.erase(it);
        ++it;
        if (it != sequence.end())
            ++it;
    }
}

int calculate_next_jacob(int first, int second)
{
    return(first + (2 * second));
}

template<typename T>
T get_jacob_order(T &pend)
{
    T jacob;
    
    int x = 3;
    int j = 1;
    int first = 1;
    int second = 3;
    while (jacob.size() + 1 != pend.size())
    {
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
void insert_pend(T& sequence, T& pend, std::map<int, int> og)
{
    T order = get_jacob_order(pend);
    
    typename T::iterator it = sequence.begin();
    sequence.insert(it, pend.at(0));
    
    typename T::iterator pos;
    int to_insert = 0;
    for(pos = order.begin(); pos != order.end(); pos++)
    {
        to_insert = pend.at(*pos);
        it = std::upper_bound(og.begin(), og.find(to_insert), to_insert);
        sequence.insert(it, to_insert);
    }
}

template<typename T>
void    PmergeMe<T>::merge_insert_sort()
{
    make_main_pend(sequence, pend);
    if (sequence.size() > 1)
    {
        pair_sort(sequence);
        merge_insert_sort();
    }
    insert_pend(sequence, pend, og);
}

template<typename T>
PmergeMe<T>::PmergeMe(): sequence(), pend() {};

template<typename T>
PmergeMe<T>::PmergeMe(char **argv, int argc): pend()
{
    for(int i = 1; i < argc; i++)
        sequence.push_back(atoi(argv[i]));

    pair_sort(sequence);
    save_og_connections(sequence, og);
    merge_insert_sort();
};
template<typename T>
PmergeMe<T>::PmergeMe(const PmergeMe &other): pend()
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