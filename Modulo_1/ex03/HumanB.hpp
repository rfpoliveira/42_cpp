/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:38:56 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/05 15:34:36 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_H
# define HumanB_H

#include <iostream>
#include "Weapon.h"

class HumanB
{
private:
	std::string name;
	Weapon *weapon;

public:
	HumanB(std::string name);
	~HumanB();
	void attack(void) const;
	void setWeapon(Weapon& weapon);
};

#endif