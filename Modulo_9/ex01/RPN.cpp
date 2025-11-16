/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 12:06:53 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/11/13 14:35:33 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool validate_char(char c)
{
    if ((c < '0' || c > '9') && c != '+' && c != '-' && c != '/' && c != '*')
        return (false);
    return (true);
}

void make_operation(char op, std::stack<int> &stack)
{
    int b = stack.top();
    stack.pop();
    int a = stack.top();
    stack.pop();

    switch (op)
    {
    case '+':
        stack.push(a + b);
        break;
    case '-':
        stack.push(a - b);
        break;
    case '/':
        stack.push(a / b);
        break;
    case '*':
        stack.push(a * b);
        break;
    default:
        break;
    }
}

bool create_stack(std::string exp, std::stack<int> &stack)
{
    std::string::iterator it;
    for (it = exp.begin(); it != exp.end(); it++)
    {
        if(*it == ' ')
            continue ;
        if(!validate_char(*it))
            return (false);
        if (*it == '+' || *it == '-' || *it == '/' || *it == '*')
            make_operation(*it, stack);
        else
            stack.push(*it - '0');
    }
    return (true);
}