/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 11:37:40 by lyubov            #+#    #+#             */
/*   Updated: 2022/08/05 11:50:41 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Person.hpp"

Person::Person(int age, std::string name, std::string occupation): age_(age), name_(name), occupation_(occupation){

}

Person::~Person(){

}

Person::Person(const Person &other):age_(other.age_) ,name_(other.name_), occupation_(other.occupation_){

}

Person & Person::operator=(const Person &other){
	if (this != &other){
		age_ = other.age_;
		name_ = other.name_;
		occupation_ = other.occupation_;
	}
	return (*this);
}

std::ostream & operator<<(std::ostream &out, const Person &a){
	out<<COLOR_GREEN<<a.name_<<", "<<a.age_<<"years old, "<<a.occupation_<<std::endl<<COLOR_DEFAULT;
	return (out);
}

