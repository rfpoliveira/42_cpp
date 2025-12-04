/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:39:18 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/12/04 16:17:09 by rpedrosa         ###   ########.fr       */
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
           temp = index.at(back - sequence.begin());
           index.at(back - sequence.begin()) = index.at(front - sequence.begin());
           index.at(front - sequence.begin()) = temp;
        }
        back++;
        front++;
        if (front != sequence.end())
            front++;
        back++;
    }
}

template<typename T>
void make_main_pend(T& main, T& pend, T& index)
{
    typename T::iterator it;
    int i = -1;
    
    for(it = index.begin(); it != index.end(); it++)
    {
        i++;
        if(i % 2 == 0)
            pend.push_back(*it);
        else
            main.push_back(*it);
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
typename T::iterator find_pair(T& sequence, T& main, int value)
{
    int pair = 0;
    if (value % 2 == 0)
        pair = value + 1;
    else
        pair = value - 1;
    if (pair >= (int)sequence.size())
        return(main.end());
    typename T::iterator ret;
    for(ret = main.begin(); ret != main.end(); ret++)
    {
        if (*ret == pair)
            break ;
    }
    int needle = sequence.at(pair);
    int mid;
    int low = 0;
    int high = ret - main.begin();

    while (low < high) 
    {
        mid = low + (high - low) / 2;
        if (needle >= sequence.at(main.at(mid))) 
            low = mid + 1;
        else
            high = mid;
    }
    if(low < high && sequence.at(main.at(low)) <= needle)
       low++;
    return (main.begin() + low);
}

template<typename T>
T insert_pend(T& sequence, T& main, T& pend)
{
    T order = get_jacob_order(pend);

    typename T::iterator ord_it;
    typename T::iterator pos;
    int value = 0;
    
    for(ord_it = order.begin(); ord_it != order.end(); ord_it++)
    {
        value = pend.at(*(ord_it) - 1);
        pos = find_pair(sequence, main, value);
        if (pos != main.begin())
            pos--;
        main.insert(pos, value);
        if (pos == main.begin())
        {
            main.at(0) = main.at(0) + main.at(1);
            main.at(1) = main.at(0) - main.at(1);
            main.at(0) = main.at(0) - main.at(1);
        }
    }
    return(main);
}

template<typename T>
T   PmergeMe<T>::merge_insert_sort(T& arg)
{
    T main;
    T pend;
    pair_sort(sequence, arg);
    make_main_pend(main, pend, arg);
    if (main.size() > 1)
        main = merge_insert_sort(main);
    insert_pend(sequence, main, pend);
    return(main);
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
    T temp = merge_insert_sort(index);
    T buffer;
    typename T::iterator it;
    typename T::iterator index_it = temp.begin();

    for(it = sequence.begin(); it != sequence.end();it++)
        buffer.push_back(sequence.at(*(index_it++)));
    sequence = buffer; 
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