/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:51:47 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/11/13 13:24:16 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main (int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error: Usage: ./RPN <expression>" << std::endl;
        return (-1);
    }
    
    std::stack<int> stack;

    if(!create_stack(argv[1], stack) || stack.size() != 1)
    {
        std::cerr << "Error" << std::endl;
        return (-2);
    }
    std::cout << stack.top() << std::endl;   
    return (0);
}