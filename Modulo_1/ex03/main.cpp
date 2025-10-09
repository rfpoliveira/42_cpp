/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:10:42 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/10/09 17:03:42 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"
#include "HumanA.hpp"
#include "HumanB.hpp"


int main (void)
{

	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
 	jim.setWeapon(club);
 	jim.attack();
	club.setType("some other type of club");
	jim.attack();

	return 0;
}