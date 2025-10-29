/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:23:37 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/10/29 16:12:03 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    {
        std::cout << "Test 1: 20 integer array" << std::endl;
        unsigned int i = 20;
        Array<int> arr(i);
        for (int i = 0; i < 20; i++)
            std::cout << arr[i] << std::endl;
        std::cout << std::endl;
    }
    
    {
        std::cout << "Test 2: string array" << std::endl;
        unsigned int i = 3;
        Array<std::string> arr(i);
        arr[0] = "hello";
        arr[1] = ", world";
        arr[2] =  "!";
        std::cout << "arr: " << std::endl;
        std::cout << "length: " << arr.size() << std::endl;
        for (unsigned int j = 0; j < i; j++)
            std::cout << arr[j];
        std::cout << std::endl << std::endl;;

        std::cout << "Test 3: copy contructor" << std::endl;
        std::cout << "other: " << std::endl;
        Array<std::string> other(arr);
        std::cout << "length: " << other.size() << std::endl;
        for (unsigned int j = 0; j < i; j++)
            std::cout << other[j];
        std::cout << std::endl << std::endl;

        std::cout << "Test 4: assign operator" << std::endl;
        std::cout << "other2: " << std::endl;
        Array<std::string> other2(3);
        other2 = arr;
        std::cout << "length: " << other2.size() << std::endl;
        for (unsigned int j = 0; j < i; j++)
            std::cout << other2[j];
        std::cout << std::endl << std::endl;
    }

     {
        std::cout << "Test 5: empty array" << std::endl;
        Array<long> arr;
        std::cout << arr.size() << std::endl;
        arr.display_array_adress();
    }

    {
        std::cout << "Test 6: exeption" << std::endl << std::endl;
        Array<int> exep(5);
        exep[10] = 1;

        std::cout << "Done :)" << std::endl;
    }
}