/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:38:00 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/10/28 14:52:05 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serial.hpp"

int main(void)
{   
    Data Exemple;
    Data *ptr;
    
    ptr = &Exemple;
    
    std::cout << "original info: " << std::endl;
    std::cout << "name: " << ptr->name << std::endl;
    std::cout << "number " << ptr->number << std::endl;
    std::cout << "pointer: "<< ptr << std::endl;

    uintptr_t i = Serializer::serialize(ptr);
    std::cout << "Serialized pointer: " << i << std::endl;

    Data *new_ptr;
    new_ptr = Serializer::deserialize(i);
    
    std::cout << "new info from deserialized integer: " << std::endl;
    std::cout << "name: " << new_ptr->name << std::endl;
    std::cout << "number " << new_ptr->number << std::endl;
    std::cout << "pointer: "<< new_ptr << std::endl;
}