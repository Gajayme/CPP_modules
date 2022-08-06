/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gajayme <gajayme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 18:28:47 by gajayme           #+#    #+#             */
/*   Updated: 2022/08/06 20:44:22 by gajayme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

# define COLOR_DEFAULT "\033[0m"
# define COLOR_RED "\033[31m"
# define COLOR_GREEN "\033[32m"
# define COLOR_BLUE "\033[34m"
# define COLOR_MAGENTA "\033[35m"
# define COLOR_YELLOW "\033[33m"

template <typename T>
class Array{

private:

	T		*arr_;
	size_t	size_;

public:

//=====CONSTRUCTORS=====

	Array(){
		arr_ = NULL;
	}

	Array(size_t n){

		size_ = n;
		arr_ = new T [n];

	}
	Array(const Array &other){
		size_ = other.size_;
		arr_ = new T[size_];
		for (size_t i = 0; i != size_; ++i){
			arr_[i] = other.arr_[i];
		}
	}

	~Array(){
		delete [] arr_;
	}

//=====OPERATORS=====

	Array & operator=(const Array &other){

		if (this != &other){
			delete [] arr_;
			size_ = other.size_;
			arr_ = new T [size_];
			for (size_t i = 0; i != size_; ++i){
				arr_[i] = other.arr_[i];
			}
		}
		return (*this);
	}

	T& operator[](size_t index){
		if (index < 0 || index > size_)
			throw (std::overflow_error("Index is out of bound"));
		return (arr_[index]);
	}

	const T& operator[](size_t index) const {
		if (index < 0 || index > size_)
			throw (std::overflow_error());
		return (arr_[index]);
	}

//=====METHODS=====

	size_t size(){
		return (size_);
	}

};

class Dollars
{
private:
    int m_dollars;
public:
	Dollars(int dollars = 0): m_dollars(dollars){
	}
	int get_dollars(){
		return (m_dollars);
	}
};

#endif