/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 17:47:30 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/06/10 18:37:27 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "main.h"

class PhoneBook
{
private:

	Contact contacts[8];
	int list_len;
	
public:

	PhoneBook();
	~PhoneBook();
	void add_contact(void);
	void search_list(void) const;
};

#endif