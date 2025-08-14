/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 17:15:56 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/14 17:23:09 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap Kratos("Kratos");
	ClapTrap Zeus("Zeus");
	
	Kratos.attack("Zeus");
	Zeus.takeDamage(0);
	std::cout << "Zeus: Is that all you got?" << std::endl;
	std::cout << "Kratos becomes enraged by the taunt" << std::endl;
	Kratos.set_ad(8);
	Kratos.attack("Zeus");
	Zeus.takeDamage(8);
	std::cout << "Zeus: You think that is enough to kill a god?" << std::endl;
	Zeus.beRepaired(5);
	Kratos.attack("Zeus");
	Zeus.takeDamage(8);
	Kratos.attack("Zeus");
	Zeus.takeDamage(8);
	std::cout << "Kratos: Pathetic" << std::endl;
}