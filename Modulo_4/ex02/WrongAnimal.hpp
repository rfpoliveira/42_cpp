/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:18:24 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/12/02 16:25:34 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "WrongAAnimal.hpp"

class WrongAAnimal
{
	protected:
		std::string type;
	
	public:
		WrongAAnimal();
		WrongAAnimal(const WrongAAnimal& other);
		WrongAAnimal &operator=(const WrongAAnimal &other);
		~WrongAAnimal();
		void makeSound(void) const;
		std::string get_type(void) const;
};