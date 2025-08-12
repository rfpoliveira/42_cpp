/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:25:26 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/12 19:10:39 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (void)
{
	Harl ze;

	std::cout << "debug: " << std::endl;
	ze.complain("debug");
	
	std::cout << "info: " << std::endl;
	ze.complain("info");

	std::cout << "warning: " << std::endl;
	ze.complain("warning");
	
	std::cout << "error: " << std::endl;
	ze.complain("error");

	std::cout << "outra coisa: " << std::endl;
	ze.complain("coisa");
}