/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:18:08 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/10/29 11:28:52 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T> void swap(T& a, T& b)
{
    T tmp = a;
    a = b;
    b = tmp;
};

template <typename T> T max(T a, T b)
{
    if (b > a || a == b)
        return (b);
    return (a);    
};

template <typename T> T min(T a, T b)
{
    if (b < a || a == b)
        return (b);
    return (a);
};

#endif