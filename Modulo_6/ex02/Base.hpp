/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:54:59 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/10/28 15:29:07 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include "iostream"
#include <typeinfo>
#include <cstdlib>

class Base
{
    public:
       virtual ~Base();
};


class A: public Base
{
    public:
        A();
        ~A();
};

class B: public Base
{
    public:
        B();
        ~B();  
};

class C: public Base
{
    public:
        C();
        ~C();
};

Base* generate(void);
void identify(Base* p);
void identify(Base &p);

#endif