/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:56:18 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/10/29 11:05:51 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int Base::type = 0;

Base::~Base(){};

A::A()
{
    Base::type = 1;
};
A::~A(){};

B::B()
{
    Base::type = 2;
};
B::~B(){};

C::C()
{
    Base::type = 3;
};
C::~C(){};

Base* generate(void)
{
    srand(time(0));
    int randnumb = rand() % 3;
    
    switch (randnumb)
    {
    case 0:
    {
        A tmp;
        Base *ptr = &tmp;
        return(ptr);
        break;
    }
        case 1:
    {
        B tmp;
        Base *ptr = &tmp;
        return(ptr);
        break;
    }
        case 2:
    {
        C tmp;
        Base *ptr = &tmp;
        return(ptr);
        break;
    }
    
    default:
        break;
    }
    return (NULL);
}


void identify(Base* p)
{
    switch (p->type)
    {
    case 1:
        std::cout << "A" << std::endl;
        break;
    case 2:
        std::cout << "B" << std::endl;
        break;
    case 3:
        std::cout << "C" << std::endl;
        break;   
    default:
        break;
    }
}
void identify(Base &p)
{
    switch (p.type)
    {
    case 1:
        std::cout << "A" << std::endl;
        break;
    case 2:
        std::cout << "B" << std::endl;
        break;
    case 3:
        std::cout << "C" << std::endl;
        break;   
    default:
        break;
    }
}