/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:50:11 by lyubov            #+#    #+#             */
/*   Updated: 2022/08/13 16:19:16 by lyubov           ###   ########.fr       */
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

	iterator begin(){
		return this->c.begin();
	}

	iterator end(){
		return this->c.end();
	}

};

#endif
