/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 17:53:10 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/06/23 15:12:19 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include "main.h"

class Contact
{
	
private:

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	
public:

	Contact();
	~Contact();
	std::string getter(int what_to_get) const;
	void setter(int what_to_set, std::string buffer);
	std::string truncate_info(std::string info) const;
};

#endif