/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 17:47:30 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/06/23 16:39:54 by rpedrosa         ###   ########.fr       */
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
	int current_contact;
	void _prompt_index(void) const;
	
public:

	void add_contact(void);
	void display_list(void) const;
	PhoneBook();
	~PhoneBook();
};

#endif