/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 16:32:13 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/15 16:44:39 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
	this->ideas[0] = "I want to eat";
	this->ideas[1] = "I will run";
	this->ideas[2] = "I will sleep";
	this->ideas[3] = "I want cuddles";
	this->ideas[4] = "I like my owner";
	this->ideas[5] = "I like food";
	this->ideas[6] = "I like to sleep";
	this->ideas[7] = "I like cuddles";
	this->ideas[8] = "I want to go for a walk";
	this->ideas[9] = "Hello :)";
}
Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}