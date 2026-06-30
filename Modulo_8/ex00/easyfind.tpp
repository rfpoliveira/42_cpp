/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:32:16 by rpedrosa          #+#    #+#             */
/*   Updated: 2026/06/30 12:04:50 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename T>
typename T::const_iterator easyfind (T& container, int needle)
{
	typename T::const_iterator i;

	i = std::find(container.begin(), container.end(), needle);
	if (i == container.end())
		return (container.end());
	return (i);
}
