/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:45:54 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/10/29 12:02:44 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T> void print_int(const T& a)
{
    std::cout << a << std::endl;
}

template <typename T> void increment(T& a)
{
    ++a;
}

int main(void)
{
    int lenght = 3;
    int arr[] = {1, 2 , 3};
    
    iter(arr, lenght, increment<int>);

    iter(arr, 3, print_int<int>);
}