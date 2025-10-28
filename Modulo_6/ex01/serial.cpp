/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serial.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:17:26 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/10/28 14:51:15 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serial.hpp"

Serializer::Serializer(){};
Serializer::Serializer(const Serializer& other)
{
    (void)other;
};

Serializer::~Serializer(){};

Serializer& Serializer::operator=(const Serializer &other)
{
    (void)other;
    return (*this);
};

uintptr_t Serializer::serialize (Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
};

Data* Serializer::deserialize (uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
};