/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:32:54 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/05 17:12:45 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int main(int argc, char **argv)
{
	if (argc != 4 || !argv[1] || !argv[2] || !argv[3])
	{
		std::cout << "Usage: ./seb <filename> <string1> <string2>";
		return (1);
	}
	std::string file = (std::string)argv[1];
	std::string string1 = (std::string)argv[2];
	std::string string2 = (std::string)argv[3];	
	std::ifstream	ifs(file);
	std::ofstream	copy(file + ".replace");
	if (!ifs)
	{
		std::cout << "Unable to open file.";
		return (2);
	}
	char ch;
	int i = 0;
	while(ifs.get(ch))
	{
		if (ch == argv[2][i])
		{
			i++;
		
		}
		if ()
		copy << ch;
	}
}