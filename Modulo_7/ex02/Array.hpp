/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:09:01 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/10/29 16:08:36 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <cstdlib>

template<typename T>
class Array
{
    private:
        int length;
        T *arr;
        
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        
        Array &operator=(const Array& other);
        T &operator[](int i);
        
        ~Array();

        int size(void) const;
        void display_array_adress(void);

		class outofboundsExeption: public std::exception
		{
			public:
				virtual const char *what() const throw()
                {
                    return ("Could not access memory, index out of bounds");
                }
		};
};

#include "Array.tpp"

#endif