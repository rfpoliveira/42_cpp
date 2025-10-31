/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 12:59:08 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/10/31 17:22:23 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>

template<typename T>
class MutantStack: public std::stack<T>
{
	public:
		class iterator: public std::iterator <
		 							std::input_iterator_tag,
									int,
									int,
									const int *,
									int > 
		{
			public:
				iterator();
				iterator& operator++(void);
				iterator operator++(int);
				iterator& operator--(void);
				iterator operator--(int);
				bool operator==(iterator other) const;
				bool operator!=(iterator other) const;
				T operator*() const;
		};
		iterator begin();
		iterator end();
};

# include "MutantStack.tpp"

#endif


	typedef typename std::stack<T>::container_type::iterator iterator;