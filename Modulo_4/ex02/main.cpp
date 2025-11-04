/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 15:50:34 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/11/04 13:58:56 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <cstdlib>


int main (void)
{
	const Animal * j[10];

	for(int i = 0; i < 5; i++)
		j[i] = new Dog();
	for(int i = 5; i < 10; i++)
		j[i] = new Cat();

	srand(time(0));
	int idea = 0;
	for(int i = 0; i < 10; i++)
	{
		idea = rand() % 10;
		std::cout << (j[i])->get_type() << " (" << i << "): ";
		(j[i])->getIdea(idea);
		std::cout << std::endl;
	}
	
	for(int i = 0; i < 10; i++)
		delete j[i];
	return 0;
}