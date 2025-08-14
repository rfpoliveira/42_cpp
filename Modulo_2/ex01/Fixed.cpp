/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 15:03:35 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/14 12:00:25 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fixed_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const numb)
{
	std::cout << "int constructor called" << std::endl;
	this->_fixed_value = numb * (1 << Fixed::_fractional);
}
Fixed::Fixed(float const numb)
{
	std::cout << "float constructor called" << std::endl;
	this->_fixed_value = roundf(numb * (1 << Fixed::_fractional));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixed_value = other._fixed_value;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_fixed_value = other._fixed_value;
	return(*this);
}	

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_value = raw;
}

int Fixed::toInt(void) const
{
	return ((this->_fixed_value) >> Fixed::_fractional);
}

float Fixed::toFloat(void) const
{
	return((float)this->_fixed_value / (float)(1 << Fixed::_fractional));
}

std::ostream& operator<<(std::ostream& out, Fixed const& fixed_value)
{
	out << fixed_value.toFloat();
	return (out);
}



