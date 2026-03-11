/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:14:42 by rpedrosa          #+#    #+#             */
/*   Updated: 2026/03/11 11:56:11 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include "iostream"
#include <typeinfo>
#include <cstdlib>

Base* generate(void)
{
    std::srand(time(0));
    int randnumb = std::rand() % 3;
    
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
    Base *ptr = generate();

    std::cout << "Pointer: " << std::endl;
    identify(ptr);

    std::cout << "Reference: " << std::endl;
    identify(*ptr);
}