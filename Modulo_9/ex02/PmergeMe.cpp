/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:39:18 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/11/15 13:07:15 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template<typename T>
PmergeMe<T>::PmergeMe()
{
    sequence();
    pend();
};

template<typename T>
PmergeMe<T>::PmergeMe(char **argv, int argc)
{
    for(int i = 1; i < argc; i++)
        sequence.push_back(atoi(argv[i]));
    pend();
};
template<typename T>
PmergeMe<T>::PmergeMe(const PmergeMe &other)
{
    sequence = other.sequence;
    pend();
};
template<typename T>
PmergeMe<T> &PmergeMe<T>::operator=(const PmergeMe& other)
{
    sequence = other.sequence;
    return (*this);
};

template<typename T>
PmergeMe<T>::~PmergeMe(){};

template<typename T>
void    PmergeMe<T>::merge_insert_sort()
{
    pair_sort(sequence);
    create_main_pend(sequence, pend);
    if (sequence.size() > 1)
        merge_insert_sort();
    insert_pend(sequence, pend);
}

template<typename T>
void swap_pend(T &pend, int back, int front)
{
    int temp = pend.at(back);
    pend.at(back) = pend.at(front);
    pend.at(front) = temp;
}

template<typename T>
void pair_sort(T &sequence)
{   
    T::iterator back = sequence.begin();
    T::iterator front = sequence.begin();
    front++;
    
    while(front != sequence.end())
    {
        if (*back > *front)
        {
            std::iter_swap(back, front);
            if (!pend.is_empty())
                swap_pend(pend, back, front);
        }
        back++;
        front++;
        if (front != sequence.end())
            front++;
        back++;
    }
}

template<typename T>
void create_main_pend(T sequence, T pend)
{
    T::iterator it;
    T::iterator pend_it = pend.begin();
    
    for(it = sequence.begin(); it != sequence.end(); it++)
    {
        pend.push_back(*it);
        it = sequence.erase(it);
    }
}

int calculate_next_jacob(int first, int second)
{
    return(first + (2 * second));
}

template<typename T>
std::vector<int> get_jacob_order(T &pend)
{
    std::vector<int> jacob();
    
    int x = 3;
    int j = 1;
    int first = 1;
    int second = 3;
    while (jocob.size() + 1 != pend.size())
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
void insert_pend(T sequence, T pend)
{
    std::vector<int> order = get_jacob_order(pend);
    
    std::vector<int>::iterator it_order;
    T::iterator it_main;
    
    sequence.insert(sequence.begin(), pend.at(0));
    for(it_order = order.begin(); it_order != order.end(); it_order++)
    {
        
    }
}

template class PmergeMe<std::vector<int> >;
template class PmergeMe<std::deque<int> >;