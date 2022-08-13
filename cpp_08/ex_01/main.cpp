/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 00:05:56 by lyubov            #+#    #+#             */
/*   Updated: 2022/08/13 10:04:52 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void spanFiller(Span &s, size_t elements){

	if (elements < 1)
		return ;
	for (size_t i = 0; i != s.getMaxSize(); ++i){
		s.addNumber(rand()%1000);
	}
}

void simpleTests(){

	Span s1(4);
	try{
		s1.addNumber(1);
		s1.addNumber(2);
		s1.addNumber(1000);
		s1.addNumber(1000);
		s1.addNumber(1000);
	}
	catch (std::exception &e){
		std::cout<<COLOR_RED<<e.what()<<COLOR_DEFAULT<<std::endl;
	}
	std::cout<<s1;
	try{
		std::cout<<s1.longestSpan()<<std::endl;
		std::cout<<s1.shortestSpan()<<std::endl;
	}
	catch (std::exception &e){
		std::cout<<COLOR_RED<<e.what()<<COLOR_DEFAULT<<std::endl;
	}

	Span s2(4);
	try{
		s2.addNumber(1);
		s2.longestSpan();
	}
	catch (std::exception &e){
		std::cout<<COLOR_RED<<e.what()<<COLOR_DEFAULT<<std::endl;
	}

}


int main(void){

	srand(time(0));

	std::cout<<"=====SIMPLE_TESTS=====\n\n";
	simpleTests();

	std::cout<<"\n=====COMPLICATED_TESTS=====\n\n";

	Span s2(10);
	spanFiller(s2, 10);
	std::cout<<s2<<std::endl;

	try{
		std::cout<<"s2 shortest span "<<s2.shortestSpan()<<std::endl;
		std::cout<<"s2 longest span "<<s2.longestSpan()<<std::endl;
	}
	catch(std::exception &e){
		std::cout<<COLOR_RED<<e.what()<<COLOR_DEFAULT<<std::endl;
	}

	return(0);
}
