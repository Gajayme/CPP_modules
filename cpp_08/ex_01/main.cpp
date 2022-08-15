/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 00:05:56 by lyubov            #+#    #+#             */
/*   Updated: 2022/08/15 22:42:50 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void spanFiller(Span &s){

	std::vector<int> v;
	for (size_t i = 0; i != s.getMaxSize(); ++i){
		v.push_back(rand()%1000);
	}
	s.addNumber(v.begin(), v.end());
}

void simpleTests(){

	Span s1(4);
	try{
		s1.addNumber(1);
		s1.addNumber(-2);
		s1.addNumber(1000);
		s1.addNumber(1050);
		s1.addNumber(1000);
	}
	catch (std::exception &e){
		std::cout<<COLOR_RED<<e.what()<<COLOR_DEFAULT<<std::endl;
	}
	std::cout<<"s1: "<<s1;

	std::cout<<"==========\n";

	try{
		std::cout<<"s1 longest span: "<<s1.longestSpan()<<std::endl;
		std::cout<<"s1 shortest span: "<<s1.shortestSpan()<<std::endl;
	}
	catch (std::exception &e){
		std::cout<<COLOR_RED<<e.what()<<COLOR_DEFAULT<<std::endl;
	}

	std::cout<<"==========\n";

	Span s2(4);
	try{
		s2.addNumber(1);
		s2.longestSpan();
	}
	catch (std::exception &e){
		std::cout<<COLOR_RED<<e.what()<<COLOR_DEFAULT<<std::endl;
	}

	std::cout<<"==========\n";

	try{
		std::vector<int> v1 (5, 5);
		Span s3(5);
		s3.addNumber(v1.begin(), v1.end());
		std::cout<<"s3: "<<s3;
	}
	catch(std::exception &e){
		std::cout<<COLOR_RED<<e.what()<<COLOR_DEFAULT;
	}

	std::cout<<"==========\n";

	try{
		std::vector<int> v2 (6, 6);
		Span s4(5);
		s4.addNumber(v2.begin(), v2.end());
		std::cout<<s4;
	}
	catch(std::exception &e){
		std::cout<<COLOR_RED<<e.what()<<COLOR_DEFAULT<<std::endl;
	}

}


int main(void){

	srand(time(0));

	std::cout<<"=====SIMPLE_TESTS=====\n\n";
	simpleTests();

	std::cout<<"=====SUBJECT_TESTS=====\n\n";
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout<<"\n=====COMPLICATED_TESTS=====\n\n";

	Span s2(10);
	spanFiller(s2);
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
