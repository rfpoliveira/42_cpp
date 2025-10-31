/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:47:28 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/10/31 16:49:35 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutantStack.hpp"

int main()
{
{    
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);

    std::cout << "Test 1: expected 17: " << std::endl;
    std::cout << mstack.top() << std::endl;
    mstack.pop();

    std::cout << "Test 2: expected 1: " << std::endl;
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);

    std::cout << "Test 3: testing iterator begin and end " << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    std::cout << "begin(expected: 5) : " << *it << std::endl;
    std::cout << "end : " << *ite << std::endl;
    ++it;
    --it;
    std::cout << "Test 4: expected 5 3 5 737 0: " << std::endl;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
}

    std::cout << "with list: " << std::endl;

{    
    std::list<int> mlist;
    mlist.push_back(5);
    mlist.push_back(17);

    std::cout << "Test 1: expected 17: " << std::endl;
    std::cout << mlist.back() << std::endl;
    mlist.pop_back();

    std::cout << "Test 2: expected 1: " << std::endl;
    std::cout << mlist.size() << std::endl;
    mlist.push_back(3);
    mlist.push_back(5);
    mlist.push_back(737);
    //[...]
    mlist.push_back(0);
    std::cout << "Test 3: testing iterator begin and end " << std::endl;
    std::list<int>::iterator it = mlist.begin();
    std::list<int>::iterator ite = mlist.end();
    std::cout << "begin(expected: 5) : " << *it << std::endl;
    std::cout << "end : " << *ite << std::endl;
    ++it;
    --it;
    std::cout << "Test 3: expected 5 3 5 737 0: " << std::endl;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::list<int> s(mlist);
    return 0;
}
}