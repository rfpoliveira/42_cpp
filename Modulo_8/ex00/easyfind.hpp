/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:32:21 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/10/30 15:09:23 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef easyfind_HPP
# define easyfind_HPP

#include <vector>
#include <iterator>
#include <iostream>
#include <list>

template<typename T>
typename T::const_iterator easyfind(T& cont, int i);

#include "easyfind.tpp"

#endif