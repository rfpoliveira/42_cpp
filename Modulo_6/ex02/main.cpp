/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:14:42 by rpedrosa          #+#    #+#             */
/*   Updated: 2026/03/12 10:17:50 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include "iostream"
#include <cstdlib>

Base* generate(void)
{
    int randnumb = std::rand() % 3;
    
    if (randnumb == 0) 
        return new A;
    if (randnumb == 1) 
        return new B;
    if (randnumb == 2) 
        return new C;
    return NULL;
}


void identify(Base& p) 
{
	try 
    {
		(void)dynamic_cast<A&>(p);
		std::cout << "A\n";
	}

    catch (std::exception& exception) {}

	try 
    {
		(void)dynamic_cast<B&>(p);
		std::cout << "B\n";
	} 
    catch (std::exception& exception) {}
    
	try 
    {
		(void)dynamic_cast<C&>(p);
		std::cout << "C\n";
	} 
    catch (std::exception& exception) {}
}

void identify(Base* p) 
{
	if (dynamic_cast<A*>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "C\n";
}

int main (void)
{
    std::srand(time(0));

    {
        Base *ptr = generate();

        std::cout << "Pointer: " << std::endl;
        identify(ptr);

        std::cout << "Reference: " << std::endl;
        identify(*ptr);

        delete ptr;
    }

    {
        Base *ptr = generate();

        std::cout << "Pointer: " << std::endl;
        identify(ptr);

        std::cout << "Reference: " << std::endl;
        identify(*ptr);

        delete ptr;
    }

    {
        Base *ptr = generate();

        std::cout << "Pointer: " << std::endl;
        identify(ptr);

        std::cout << "Reference: " << std::endl;
        identify(*ptr);

        delete ptr;
    }
}