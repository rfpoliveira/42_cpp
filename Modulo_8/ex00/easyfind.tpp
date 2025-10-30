/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:32:16 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/10/30 15:05:29 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename T>
typename T::const_iterator easyfind (T& container, int needle)
{
	typename T::const_iterator i;

	for (i = container.begin(); i != container.end(); ++i)
	{
		if (*i == needle)
			return (i);
	}
	std::cout << *container.end() << std::endl;
	return (container.end());
}
