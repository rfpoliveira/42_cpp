/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:32:54 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/10/15 17:18:45 by rpedrosa         ###   ########.fr       */
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
	std::string file = argv[1];
	std::string string1 = argv[2];
	std::string string2 = argv[3];	
	std::ifstream	ifs(file.c_str());
	if (!ifs)
	{
		std::cout << "Unable to open file.";
		return (2);
	}
	file = file + ".replace";
	std::ofstream	copy(file.c_str());

	char s[256];
	int len = string1.length();
	char ch;
	std::string temp;
	while(ifs.get(ch))
	{
		if (ifs.eof())
			break ;
		if (ch == argv[2][0])
		{
			ifs.get(s, len);
			temp = ch + std::string(s);
			if (temp == string1)
				copy << string2;
			else
			{
				copy << ch;
				ifs.seekg(-len + 1, std::ios::cur);
			}
		}
		else
			copy << ch;
	}
	ifs.close();
	copy.close();
}