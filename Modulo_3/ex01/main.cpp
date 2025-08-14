/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 17:15:56 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/14 18:24:03 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main (void)
{
	ScavTrap Doraemon("Doraemon");

	Doraemon.display_stats();
	Doraemon.attack("nobita");
	Doraemon.beRepaired(8);
	Doraemon.takeDamage(10);
	Doraemon.guardGate();
}