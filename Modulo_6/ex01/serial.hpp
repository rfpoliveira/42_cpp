/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serial.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:15:02 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/10/28 14:47:25 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIAL_HPP
# define SERIAL_HPP

#include "data.hpp"
#include "iostream"
#include <stdint.h>

class Serializer
{
    private:
        ~Serializer();

    public:
        Serializer();
        Serializer(const Serializer &other);
        Serializer &operator=(const Serializer &other);
        static uintptr_t serialize (Data *ptr);
        static Data* deserialize (uintptr_t raw);
};

#endif