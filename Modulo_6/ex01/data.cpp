/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:22:44 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/10/28 14:33:08 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

Data::Data(): number(0), name("random name") {};

Data::Data(const Data& other)
{
    this->name = other.name;
    this->number = other.number;
};

Data::~Data(){};

Data& Data::operator=(const Data &other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->number = other.number;
    }
    return (*this);
};