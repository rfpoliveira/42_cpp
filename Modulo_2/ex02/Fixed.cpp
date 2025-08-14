/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 15:03:35 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/14 14:49:33 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//contructors

Fixed::Fixed(): _fixed_value(0){}

Fixed::Fixed(int const numb)
{
	this->_fixed_value = numb * (1 << Fixed::_fractional);
}
Fixed::Fixed(float const numb)
{
	this->_fixed_value = roundf(numb * (1 << Fixed::_fractional));
}

//destructor

Fixed::~Fixed(){}

//copy constructor

Fixed::Fixed(const Fixed &other)
{
	this->_fixed_value = other._fixed_value;
}

//member function overload operators


//assign operator

Fixed& Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		this->_fixed_value = other._fixed_value;
	return(*this);
}

//comparasion operators

bool Fixed::operator<(const Fixed &other) const
{
	if (this->_fixed_value < other._fixed_value)
		return (true);
	else
		return (false);
}

bool Fixed::operator>(const Fixed &other) const
{
	if (this->_fixed_value > other._fixed_value)
		return (true);
	else
		return (false);
}

bool Fixed::operator<=(const Fixed &other) const
{
	if (this->_fixed_value <= other._fixed_value)
		return (true);
	else
		return (false);
}

bool Fixed::operator>=(const Fixed &other) const
{
	if (this->_fixed_value >= other._fixed_value)
		return (true);
	else
		return (false);
}

bool Fixed::operator==(const Fixed &other) const
{
	if (this->_fixed_value == other._fixed_value)
		return (true);
	else
		return (false);
}

bool Fixed::operator!=(const Fixed &other) const
{
	if (this->_fixed_value != other._fixed_value)
		return (true);
	else
		return (false);
}

//aritmetic operators

Fixed Fixed::operator+(const Fixed &other) const
{
	return(Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return(Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return(Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other) const
{
	return(Fixed(this->toFloat() / other.toFloat()));
}

//increment/decriment operators

Fixed& Fixed::operator++(void)
{
	++(this->_fixed_value);
	
	return(*this);
}

Fixed& Fixed::operator--(void)
{
	--(this->_fixed_value);

	return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++(*this);

	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--(*this);

	return (tmp);
}

//min/max

const Fixed& Fixed::min(const Fixed &nbr1, const Fixed &nbr2)
{
	if (nbr1._fixed_value < nbr2._fixed_value)
		return (nbr1);
	else
		return (nbr2);
}

Fixed& Fixed::min(Fixed &nbr1, Fixed &nbr2)
{
	if (nbr1._fixed_value < nbr2._fixed_value)
		return (nbr1);
	else
		return (nbr2);
}
const Fixed& Fixed::max(const Fixed &nbr1, const Fixed &nbr2)
{
	if (nbr1._fixed_value > nbr2._fixed_value)
		return (nbr1);
	else
		return (nbr2);
}

Fixed& Fixed::max(Fixed &nbr1, Fixed &nbr2)
{
	if (nbr1._fixed_value > nbr2._fixed_value)
		return (nbr1);
	else
		return (nbr2);
}

//other member functions

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

//non member overload operator

std::ostream& operator<<(std::ostream& out, Fixed const& fixed_value)
{
	out << fixed_value.toFloat();
	return (out);
}



