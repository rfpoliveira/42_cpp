/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:25:36 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/08/12 19:04:09 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class	Harl
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

	std::string *funcNames;
	typedef void (Harl::*funcPtr)();
	funcPtr complains[4];
	
public:
	Harl();
	~Harl();
	void	complain(std::string level);
	void	(Harl::*ptr[])(void);
};

#endif