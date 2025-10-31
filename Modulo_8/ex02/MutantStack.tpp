/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 12:59:02 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/10/31 17:01:49 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::iterator::iterator()
{
	num = 0;
}

template<typename T>
typename MutantStack<T>::iterator& MutantStack<T>::iterator::operator++(void)
{
	num++;
	return (*this);
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::iterator::operator++(int)
{
	MutantStack<T>::iterator ret;
	ret = *this;
	++(*this);
	return ret;
}


template<typename T>
typename MutantStack<T>::iterator& MutantStack<T>::iterator::operator--(void)
{
	num--;
	return (*this);
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::iterator::operator--(int)
{
	MutantStack<T>::iterator ret = *this; 
	--(*this);
	return ret;
}


template<typename T>
bool MutantStack<T>::iterator::operator==(typename MutantStack<T>::iterator other) const
{
	return (num == other.num);
}	

template<typename T>
bool MutantStack<T>::iterator::operator!=(typename MutantStack<T>::iterator other) const
{
	return (num != other.num);
}

template<typename T>
T MutantStack<T>::iterator::operator*() const
{	
	return (num);
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	MutantStack<T>::iterator it;
	return (it);
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	MutantStack<T>::iterator it;
	int stackSize = this->size();

	for(int i = 0; i < stackSize; it++)
		i++;
	return (it);
}
