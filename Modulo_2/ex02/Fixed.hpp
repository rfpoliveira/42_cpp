/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:57:16 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/14 14:51:26 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _fixed_value;
		static const int _fractional = 8;
	
	public:
		Fixed();
		Fixed(int const numb);
		Fixed(float const numb);
	
		~Fixed();

		Fixed(const Fixed &other);

		Fixed &operator=(const Fixed &other);

		bool operator<(const Fixed &other) const;
		bool operator>(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;

		Fixed operator+(const Fixed &other) const;
		Fixed operator-(const Fixed &other) const;
		Fixed operator*(const Fixed &other) const;
		Fixed operator/(const Fixed &other) const;

		Fixed operator++(int);
		Fixed operator--(int);
		Fixed &operator++(void);
		Fixed &operator--(void);

		static const Fixed &min(const Fixed &nbr1, const Fixed &nbr2);
		static Fixed &min(Fixed &nbr1, Fixed &nbr2);
		static const Fixed &max(const Fixed &nbr1, const Fixed &nbr2);
		static Fixed &max(Fixed &nbr1, Fixed &nbr2);
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat (void) const;
		int	toInt(void) const;	
};

std::ostream& operator<<(std::ostream& out, Fixed const& fixed_value);

#endif