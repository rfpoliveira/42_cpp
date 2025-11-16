/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:32:25 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/10/29 12:01:04 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T, typename func> 
void iter(T a[], const int b, func f)
{
    for (int i = 0; i < b; i++)
        f(a[i]);
};


#endif