/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 15:41:12 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/12/02 16:40:56 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AAnimal
{
	protected:
		std::string type;
	
	public:
		AAnimal();
		AAnimal(const AAnimal& other);
		AAnimal &operator=(const AAnimal &other);
		virtual ~AAnimal();
		virtual void makeSound(void) const;
		virtual std::string get_type(void) const;
		virtual std::string getIdea(int index) const = 0;
};