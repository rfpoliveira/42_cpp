/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:56:18 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/10/28 15:29:23 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(){};

A::A(){};
A::~A(){};

B::B(){};
B::~B(){};

C::C(){};
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

template<typename T>
const void *get_id(void)
{
    static char marker;
    return (&marker);
}

void identify(Base* p)
{
    std::cout << typeid(p).name() << std::endl;
}
void identify(Base &p)
{
    std::cout << typeid(p).name() << std::endl;
}