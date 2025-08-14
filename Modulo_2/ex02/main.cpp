/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 15:25:02 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/14 14:56:15 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	
	Fixed const c(2);

	std::cout << "c: " << c << std::endl;
	std::cout << c / c << std::endl;
	std::cout << Fixed::min(a , b) << std::endl;
	std::cout << b - c << std::endl;
	std::cout << a - b << std::endl;
	std::cout << b / c << std::endl;
	std::cout << a * b << std::endl;

	if (a < b)
		std::cout << "< working" << std::endl;
	if (b > a)
		std::cout << "> working" << std::endl;
	if (a != b)
		std::cout << "!= working" << std::endl;
	if (b == (float)10.1016)
		std::cout << "== working" << std::endl;
	if (b <= (float)10.1016)
		std::cout << "<= working" << std::endl;
	if (b >= (float)10.1016)
		std::cout << ">= working" << std::endl;

	return 0;
}