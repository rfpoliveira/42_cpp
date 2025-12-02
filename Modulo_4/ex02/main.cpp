/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 15:50:34 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/15 17:16:49 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main (void)
{
	const AAnimal * j[10];

	for(int i = 0; i < 5; i++)
		j[i] = new Dog();
	for(int i = 5; i < 10; i++)
		j[i] = new Cat();

	std::cout << '\n';
	std::cout << j[2]->getIdea(56) << '\n';
	std::cout << j[6]->getIdea(27) << '\n';

	std::cout << '\n';	
	std::cout << '\n';

	Dog bobi = Dog();
	bobi.alterIdea("nice!", 69);
	std::cout << bobi.getIdea(69) << '\n';
	Dog bobi2 = bobi;
	std::cout << bobi2.getIdea(69) << '\n';

	Cat tareco = Cat();
	tareco.alterIdea("i dont like umans!", 27);
	std::cout << tareco.getIdea(27) << '\n';
	Cat tareco2 = tareco;
	std::cout << tareco2.getIdea(27) << '\n';
	
	std::cout << '\n';
	std::cout << '\n';


	for(int i = 0; i < 10; i++)
		delete j[i];
	return 0;
}