/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:37:14 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/05 15:27:33 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanA_H
# define HumanA_H

#include <iostream>
#include "Weapon.h"

class HumanA
{
private:
	std::string name;
	Weapon& weapon;

public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void attack(void) const;
};

#endif