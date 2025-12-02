/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:42:23 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/12/02 16:47:52 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Brain
{
	public:
		Brain();
		Brain(const Brain& other);
		Brain &operator=(const Brain &other);
		~Brain();
		
		std::string ideas[100];
};