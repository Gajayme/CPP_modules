/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 21:58:11 by lyubov            #+#    #+#             */
/*   Updated: 2022/08/15 22:43:03 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//=====CONSTRUCTORS=====

Span::Span(size_t size):maxVecSize_(size), realVecSize_(0) , vec_(){
	//std::cout<<"Constructor called\n";
}

Span::~Span(){
	//std::cout<<"Destructor called\n";
}

Span::Span(const Span &other): maxVecSize_(other.getMaxSize()),
		realVecSize_(other.getRealSize()), vec_(other.getVec()){
}

//=====OPERATORS=====

Span & Span::operator=(const Span &other){

	if (this != &other){
		maxVecSize_ = other.getMaxSize();
		realVecSize_ = other.getRealSize();
		vec_ = other.getVec();
	}
	return *this;
}

//=====METHODS

void Span::addNumber(int num){
	if (vec_.size() < maxVecSize_){
		vec_.push_back(num);
		realVecSize_ += 1;
	}
	else
		throw MaximumElements();
}

void Span::addNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite){
	if (static_cast<size_t>(ite - it) <= maxVecSize_ - realVecSize_){
		std::copy(it, ite,  std::back_inserter(vec_));
		realVecSize_ = vec_.size();
	}
	else
		throw MaximumElements();
}

int Span::shortestSpan(){
	if (realVecSize_ < 2){
		throw NotEnoughElements();
	}
	std::sort(vec_.begin(), vec_.end());
	int shortest = vec_[1] - vec_[0];

	for(size_t i = 1; i != realVecSize_; ++i){
		if ((vec_[i] - vec_[i - 1]) < shortest){
			shortest = vec_[i] - vec_[i - 1];
		}
	}
	return shortest;
}

int Span::longestSpan(){
	if (realVecSize_ < 2){
		throw NotEnoughElements();
	}
	std::sort(vec_.begin(), vec_.end());
	int longest = vec_[realVecSize_ - 1] - vec_[0];
	return longest;
}

size_t Span::getMaxSize() const{
	return maxVecSize_;
}

size_t Span::getRealSize() const{
	return realVecSize_;
}

const std::vector<int> Span::getVec() const{
	return vec_;
}

//=====EXTERNAL OPERATORS=====

std::ostream & operator <<(std::ostream &out, const Span &a){

	for (size_t i = 0; i != a.getRealSize(); ++i){
		out<<COLOR_BLUE<<a.getVec()[i]<<" ";
		if (i == 10)
			std::cout<<std::endl<<COLOR_DEFAULT;
	}
	std::cout<<std::endl<<COLOR_DEFAULT;
	return out;
}

//=====EXCEPTIONS=====

const char *Span::NotEnoughElements::what() const throw() {
		return "Span: spand doesn't have enough values";
}

const char *Span::MaximumElements::what() const throw() {
	return "Span: span already filled";
}
