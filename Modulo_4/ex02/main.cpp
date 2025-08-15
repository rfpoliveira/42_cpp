/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 15:50:34 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/15 18:29:48 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main (void)
{
	const Animal * j[10];

	for(int i = 0; i < 5; i++)
		j[i] = new Dog();
	for(int i = 5; i < 10; i++)
		j[i] = new Cat();

	j[2]->getIdea(5);
	j[6]->getIdea(2);
	
	for(int i = 0; i < 10; i++)
		delete j[i];
	return 0;
}