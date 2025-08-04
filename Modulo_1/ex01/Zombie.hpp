/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:14:06 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/04 18:00:16 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string name;
		
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	name_setter(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif