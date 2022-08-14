/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:50:11 by lyubov            #+#    #+#             */
/*   Updated: 2022/08/14 15:28:31 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack: public std::stack<T> {

	public:
//=====CONSTRUCTORS=====
	MutantStack (): std::stack<T>(){
	}

	MutantStack (const MutantStack<T> &other):std::stack<T>(other){
	}

	~MutantStack (){
	}
//=====METHODS=====
	MutantStack &operator=(const MutantStack<T> &other){
		if (this != &other)
			std::stack<T>::operator=(other);
		return *this;
	}
//=====ITERATORS=====

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin(){
		return this->c.begin();
	}

	const_iterator cbegin(){
		return this->c.cbegin();
	}

	reverse_iterator rbegin(){
		return this->c.rbegin();
	}

	const_reverse_iterator crbegin(){
		return this->c.crbegin();
	}

	iterator end(){
		return this->c.end();
	}

	const_iterator cend(){
		return this->c.cend();
	}

	reverse_iterator rend(){
		return this->c.rend();
	}

	const_reverse_iterator crend(){
		return this->c.crend();
	}

};

#endif
