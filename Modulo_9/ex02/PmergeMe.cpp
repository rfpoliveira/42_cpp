/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:39:18 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/12/05 12:24:26 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template<typename T>
void pair_sort(T &sequence, T& index)
{   
    typename T::iterator back = index.begin();
    typename T::iterator front = index.begin();
    int temp = 0;
    front++;
    
    while(front != index.end())
    {
        if (sequence.at(*back) > sequence.at(*front))
        {
           temp = index.at(back - index.begin());
           index.at(back - index.begin()) = index.at(front - index.begin());
           index.at(front - index.begin()) = temp;
        }
        back++;
        front++;
        if (front != index.end())
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
        pair = main.at(main.size() - 1);
    if (main.size() == 1)
            return(main.begin());
    typename T::iterator ret;
    for(ret = main.begin(); ret != main.end(); ret++)
    {
        if (*ret == pair)
            break ;
    }
    int needle = sequence.at(value);
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
void r_swap(T& main, int pos1, int pos2)
{
    main.at(pos1) = main.at(pos1) + main.at(pos2);
    main.at(pos2) = main.at(pos1) - main.at(pos2);
    main.at(pos1) = main.at(pos1) - main.at(pos2);
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
        main.insert(pos, value);
        if (sequence.at(main.at(0)) > sequence.at(main.at(1)))
            r_swap(main, 0, 1);
        else if(sequence.at(main.at(main.size() - 1)) < sequence.at(main.at(main.size() - 2)))
            r_swap(main ,(int)(main.size() - 1), (int)(main.size() - 2));
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