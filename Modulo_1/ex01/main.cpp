/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:20:26 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/04 18:05:40 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	int horde_size = 1;
	
	Zombie *horde = zombieHorde(horde_size, "minion");
	if (!horde)
	{
		std::cout << "Error, please try again." << std::endl;
		return (1);
	}	
	for (int i = 0; i < horde_size; i++)
	{
		std::cout << i << ": ";
		horde[i].announce();
	}
	delete[] horde;
}