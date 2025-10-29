/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:10:38 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/10/29 16:09:50 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array()
{
    this->length = 0;
    this->arr = NULL;
}
template<typename T>
Array<T>::Array(unsigned int n)
{
    this->length = n;
    this->arr = new T[n];
}

template<typename T>
Array<T>::Array(const Array& other)
{
    this->length = other.length;
    if (this->length == 0)
        this->arr = NULL;
    else
    { 
        this->length = other.length;
        this->arr = new T[other.length];
        for (int i = 0; i < this->length; i++)
            this->arr[i] = other.arr[i];
    }   
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
    delete[] this->arr;
    this->length = other.length;
    if (this->length == 0)
        this->arr = NULL;
    else
    {
        this->length = other.length;
        this->arr = new T[other.length];
        for (int i = 0; i < this->length; i++)
            this->arr[i] = other.arr[i];
    }
    return (*this);
}

template<typename T>
T& Array<T>::operator[](int i)
{
    try
    {
        if (i > this->length)
            throw (Array::outofboundsExeption());
    }
    catch(Array::outofboundsExeption& exep)
    {
        std::cout << exep.what() << std::endl;
        return(this->arr[0]);
    };
    return (this->arr[i]);
}

template<typename T>
int Array<T>::size(void) const
{
    return(this->length);
}

template<typename T>
Array<T>::~Array()
{
    delete[] this->arr;
}

template<typename T>
void Array<T>::display_array_adress(void)
{
    std::cout << this->arr << std::endl;
}